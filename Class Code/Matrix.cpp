#include "Matrix.h"

CMatrix::CMatrix(std::string name, unsigned int nRows, unsigned int nCols) : m_Name(name), m_nRows(nRows), m_nCols(nCols)
{
	this->m_fMatrix = new float* [this->m_nRows];
	for (size_t i{}; i < this->m_nRows; i++)
	{
		this->m_fMatrix[i] = new float[this->m_nCols];
	}
}

void CMatrix::OnGetMatrix()
{
	std::cout << "Enter Matrix Elements of " << this->m_Name << std::endl;
	for (size_t i{}; i < this->m_nRows; i++)
	{
		for (size_t j{}; j < this->m_nRows; j++)
		{
			std::cout << this->m_Name << "[" << (i + 1) << "][" << (j + 1) << "]: ";
			std::cin >> this->m_fMatrix[i][j];
		}
	}
}

void CMatrix::OnDisplayMatrix()
{
	std::cout << this->m_Name << std::endl;
	for (size_t i{}; i < this->m_nRows; i++)
	{
		for (size_t j{}; j < this->m_nRows; j++)
		{
			std::cout << this->m_fMatrix[i][j] << '\t';
		}
		std::cout << std::endl;
	}
}

//void CMatrix::OnAddMatrices(CMatrix Mat1, CMatrix Mat2)
//{
//	for (size_t i{}; i <this->m_nRows; i++) //this-> is pointing to matrixsum
//	{
//		for (size_t j{}; j < this->m_nCols; j++)
//		{
//			this->m_fMatrix[i][j] = Mat1.m_fMatrix[i][j] + Mat2.m_fMatrix[i][j];
//		}
//	}
//}

void CMatrix::OnAddMatrices(CMatrix& Mat1, CMatrix& Mat2)	//pass by reference to avoid double destroying matrices
{
	for (size_t i{}; i < this->m_nRows; i++) //this-> is pointing to matrixsum
	{
		for (size_t j{}; j < this->m_nCols; j++)
		{
			this->m_fMatrix[i][j] = Mat1.m_fMatrix[i][j] + Mat2.m_fMatrix[i][j];
		}
	}
}

CMatrix::~CMatrix()
{
	std::cout << "Destroying the object " << this->m_Name << " and releasing the associated dynamic memory..." << std::endl;
	delete[] this->m_fMatrix;
}
