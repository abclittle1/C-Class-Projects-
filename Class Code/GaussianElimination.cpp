#include "GaussianElimination.h"

//Constructor to create the coefficient, constant and unknown matrices.
CLinearEquations::CLinearEquations(int nNumberOfVar)
{
	this->m_nNumberOfVar = nNumberOfVar;
	this->m_fCoeffInverse = {nullptr};
	this->m_fCoefficents = new double *[this->m_nNumberOfVar]; //Creating dynamic memory equivalent to the coefficient matrix a (8-13)
	
	for (size_t i{}; i < this->m_nNumberOfVar; i++)
	{
		this->m_fCoefficents[i] = new double [this->m_nNumberOfVar];
	}
	this->m_fConstants = new double [this->m_nNumberOfVar]; //Dynamic memory for B 
	this->m_fUnknowns = new double [this->m_nNumberOfVar]; //Dynamically allocated memory for unknowns 

	this->m_AddFlops = 0;
	this->m_DivFlops = 0;
	this->m_MultiFlops = 0;

}

// Method to create the upper triangular matrix of the coefficient matrix.
void CLinearEquations::OnTriangulate()
{
	double fTemp;
	for (size_t j{}; j < this->m_nNumberOfVar; j++) //Upper Triangluar
	{
		for (size_t i = (j + 1); i < this->m_nNumberOfVar; i++) //This gives the multiplier 
		{
			fTemp = this->m_fCoefficents[i][j] / this->m_fCoefficents[j][j]; 
				this->m_DivFlops++;
				for (size_t k{ j }; k < this->m_nNumberOfVar; k++) //Each iteration gives 1 element 0 
				{
					this->m_fCoefficents[i][k] = this->m_fCoefficents[i][k] - fTemp * this-> m_fCoefficents[j][k]; //finds the coefficients 
					this->m_AddFlops++;
					this->m_MultiFlops++;
				}
				this->m_fConstants[i] = this->m_fConstants[i] - fTemp * this->m_fConstants[j];
				this->m_AddFlops++;
				this->m_MultiFlops++;
		}
	}
}

// Method to implement the back substitution algorthim to compute the solutions.
void CLinearEquations::OnBackSubtitute()
{
	double fTemp;
	std::cout<<"Solutions"<<std::endl;
	this->m_fUnknowns[this->m_nNumberOfVar - 1] = 
		this->m_fConstants[this->m_nNumberOfVar - 1] / this->m_fCoefficents[this->m_nNumberOfVar - 1][this->m_nNumberOfVar - 1];
	this->m_DivFlops++;
	for (int i = (this->m_nNumberOfVar - 2); i >= 0; --i)
	{
		fTemp = 0.0;
		for (int j = i + 1; j < this->m_nNumberOfVar; j++)
		{
			fTemp += this->m_fCoefficents[i][j] * this->m_fUnknowns[j];
			this->m_AddFlops++;
			this->m_MultiFlops++;
		}
		this->m_fUnknowns[i] = (this->m_fConstants[i] - fTemp) / this->m_fCoefficents[i][i];
		this->m_AddFlops++;
		this->m_DivFlops++;
	}
	std::cout<<"Solutions"<<std::endl;
	for (size_t i{}; i < this->m_nNumberOfVar; i++)
	{
		std::cout<<"X("<<(i+1)<<"): "<<std::setw(10)<<std::setprecision(6)<<this->m_fUnknowns[i]<<std::endl;
	}
}

// Method to compute the determinant of the coefficient matrix after creating the upper triangular matrix.
double CLinearEquations::OnComputeDeterminant()
{
	double fTemp =this->m_fCoefficents[0][0]; //This is already storing the 0,0 element of the principal diagnal 
	for (size_t i{ 1 }; i < this->m_nNumberOfVar; i++)
	{
		fTemp *= this->m_fCoefficents[i][i];
	}
	
	return fTemp;
}

// Method to compute the inverse of the coefficient matrix using the Gauss-Jordan techinque.
void CLinearEquations::OnComputeInverse()
{
	double fTemp;
	for (size_t j{}; j < this->m_nNumberOfVar; j++)
	{
		for (size_t i{}; i < this->m_nNumberOfVar; i++)
		{
			if (i > j)
			{
				fTemp = -this->m_fCoefficents[i][j] / this->m_fCoefficents[j][j];
				this->m_DivFlops++;
				for (size_t k{}; k < this->m_nNumberOfVar; k++)
				{
					this->m_fCoefficents[i][k] += (fTemp * this->m_fCoefficents[j][k]);
					this->m_MultiFlops++;
					this->m_AddFlops++;

					this->m_fCoeffInverse[i][k] += (fTemp * this->m_fCoeffInverse[j][k]);
					this->m_MultiFlops++;
					this->m_AddFlops++;
				}
			}
			if (i < j)
			{
				fTemp = -this->m_fCoefficents[i][j] / this->m_fCoefficents[j][j];
				this->m_DivFlops++;
				for (size_t k{}; k < this->m_nNumberOfVar; k++)
				{
					this->m_fCoefficents[i][k] += (fTemp * this->m_fCoefficents[j][k]);
					this->m_MultiFlops++;
					this->m_AddFlops++;

					this->m_fCoeffInverse[i][k] += (fTemp * this->m_fCoeffInverse[j][k]);
					this->m_MultiFlops++;
					this->m_AddFlops++;
				}
			}
		}

		//At this point you will have diag(A)
		for (size_t i{}; i < this->m_nNumberOfVar; i++)
		{
			for (size_t j{}; j < this->m_nNumberOfVar; j++)
			{
				this->m_fCoeffInverse[i][j] /= this->m_fCoefficents[i][i];
				this->m_DivFlops++;
			}
		}
	}
}

// Method to construct the identity matrix to be used in the Gauss-Jordan Techinque
void CLinearEquations::OnFormIdentity()
{
	this->m_fCoeffInverse = new double *[this->m_nNumberOfVar]; //Allocating memory for the function for the vector of pointers corresponding the the number of variables 

	for (size_t i{}; i < this->m_nNumberOfVar; i++)
	{
		this->m_fCoeffInverse[i] = new double[this->m_nNumberOfVar];
		for (size_t j{}; j < this->m_nNumberOfVar; j++)
		{
			if (i == j)
			{
				this->m_fCoeffInverse[i][j] = 1.0;
			}
			else
			{
				this->m_fCoeffInverse[i][j] = 0.0; 
			}
		}
	}
}

// Method to compute the solutions using the Gauss-Jordan Techinque.
void CLinearEquations::OnComputeSolution()
{
	for (size_t i{}; i < this->m_nNumberOfVar; i++)
	{
		this->m_fUnknowns[i] = 0.0;
		for (size_t j{}; j < this->m_nNumberOfVar; j++)
		{
			this->m_fUnknowns[i] += this->m_fCoeffInverse[i][j] * this->m_fConstants[j];
			this->m_MultiFlops++;
			this->m_AddFlops++;
		}

		std::cout<<this->m_fUnknowns[i]<<std::endl;
	}
}

// Method to display the number of flops.
void CLinearEquations::OnDisplayFlops()
{
	std::cout<<"Multiplication: "<<this->m_MultiFlops<<std::endl;
	std::cout<<"Division: "<<this->m_DivFlops<<std::endl;
	std::cout<<"Addition: "<<this->m_AddFlops<<std::endl;
}


void CLinearEquations::InputEquations()
{
	std::cout<<"Coefficents of the Equations"<<std::endl; 
	for (size_t i{}; i < this->m_nNumberOfVar; i++) //Representing Equations
	{
		std::cout<<"Enter Coefficents of Equation("<<(i+1)<<")"<<std::endl;
		for (size_t j{}; j < this->m_nNumberOfVar; j++) //Each Equation 
		{
			std::cout<<"A("<<(i+1)<<(j+1)<<"): ";
			std::cin>> this->m_fCoefficents[i][j];
		}
		std::cout<<"B("<<(i+1)<<"): ";
		std::cin>> this->m_fConstants[i]; //Storing the constants 
	}
}

void CLinearEquations::DisplayEquations() //Displaying the equations 
{
	for (size_t i{}; i < this->m_nNumberOfVar; i++)
	{
		for (size_t j{}; j < this->m_nNumberOfVar; j++)
		{
			std::cout<<std::showpos<< this->m_fCoefficents[i][j]<<std::noshowpos<<"X("<<(j+1)<<")";
		}
		std::cout<<" = "<<std::showpos<< this->m_fConstants[i]<<std::endl;
	}
}
