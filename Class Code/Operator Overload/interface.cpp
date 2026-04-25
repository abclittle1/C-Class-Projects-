#include "Matrix.h"
std::ostream& operator <<(std::ostream& os, const CMatrix& matrix)
{
	std::cout << matrix.m_szName << std::endl;
	for (size_t i{}; i < matrix.m_nRows; i++)
	{
		for (size_t j{}; j < matrix.m_nCols; j++)
		{
			os << matrix.m_fArray[i][j] << '\t';
		}
		os << std::endl;
	}
	return os;
}

std::istream& operator >>(std::istream& istr, CMatrix& matrix)
{
	std::cout << "Enter Values of Matrix: " << matrix.m_szName << std::endl;
	for (size_t i{}; i < matrix.m_nRows; i++)
	{
		for (size_t j{}; j < matrix.m_nCols; j++)
		{
			std::cout << matrix.m_szName << "[" << (i + 1) << "][" << (j + 1) << "] = ";
			istr >> matrix.m_fArray[i][j];
		}
	}
	return istr;
}


