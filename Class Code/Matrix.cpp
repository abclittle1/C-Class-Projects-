#include "Matrix.h"

CMatrix::CMatrix(std::string name, unsigned int nRows, unsigned int nCols)
{
	this->m_szName = name;
	this->m_nRows = nRows;
	this->m_nCols = nCols;
	this->m_fArray = new float* [this->m_nRows];
	for (size_t i{}; i < this->m_nRows; i++)
	{
		this->m_fArray[i] = new float[this->m_nCols];
	}
}

CMatrix::~CMatrix()
{
	std::cout << "Destroying Matrix " << this->m_szName << std::endl;
	delete[] this->m_fArray;
}

CMatrix& CMatrix::operator=(CMatrix& matrix)
{
	std::cout << "Inside = operator v1 function" << std::endl;
	std::cout << matrix.m_szName << std::endl; 

	this->m_szName = matrix.m_szName;

	for (size_t i{}; i < this->m_nRows; i++)
	{
		for (size_t j{}; j < this->m_nCols; j++)
		{
			this->m_fArray[i][j] = matrix.m_fArray[i][j];
		}
	}
	return *this; //Must derefference to return the actual object 
}

//Pointer to pointer operator overloading 
CMatrix& CMatrix::operator = (float** array)
{
	std::cout << "Inside = operator v2 function" << std::endl;
	for (size_t i{}; i < this->m_nRows; i++)
	{
		for (size_t j{}; j < this->m_nCols; j++)
		{
			this->m_fArray[i][j] = array[i][j];
		}
	}
	delete[] array; 
	return *this; //Must derefference to return the actual object 
}

//Writing the global function not the class function because friend 
float** operator + (const CMatrix& matA, const CMatrix& matB)
{
	std::cout << "Inside + operator function" << std::endl;
	float** array = new float* [matA.m_nRows];
	for (size_t i{}; i < matA.m_nRows; i++)
	{
		array[i] = new float[matA.m_nCols];
	}
	for (size_t i{}; i < matA.m_nRows; i++)
	{
		for (size_t j{}; j < matA.m_nCols; j++)
		{
			array[i][j] = matA.m_fArray[i][j] + matB.m_fArray[i][j];
		}
	}
	return array; //Pointer-to-Pointer
}
CMatrix& CMatrix::operator ++(int)
{
	for (size_t i{}; i < this->m_nRows; i++)
	{
		for (size_t j{}; j < this->m_nCols; j++)
		{
			this->m_fArray[i][j]++;
		}
	}
	return *this;
}

//Member function because operating on a single object
float* CMatrix::operator[] (int nIndex)
{
	std::cout << "inside operator []" << nIndex << std::endl;
	return (this->m_fArray[nIndex]);
}

float CMatrix::operator ()(int nRow, int nCols)
{
	std::cout << "inside () " << std::endl; 
	return this->m_fArray[nRow - 1][nCols - 1];
}

float CMatrix::operator()()
{
	float trace{};
	if (this->m_nRows == this->m_nCols)
	{
		for (size_t i{}; i < this->m_nRows; i++)
		{
			trace += this->m_fArray[i][i]; //sum of the diagnal elements of a matrix 
		}
	}
	return trace;
}