#include "Matrix.h"

//Definition of the Overloaded operator << function
std::ostream& operator << (std::ostream& ostr, const Matrix& m)
{
	ostr << "Matrix: " << m.getName() << std::endl;
	for (size_t i{}; i < m.getRows(); i++)
	{
		for (size_t j{}; j < m.getCols(); j++)
		{
			ostr << m.getValues(i,j) << "\t";
		}
		ostr << std::endl;
	}
	return ostr;
}
//Definition of the Overloaded operator >> function
std::istream& operator >> (std::istream& istr, Matrix& m)
{
	float temp{};
	std::cout << "Input elements of Matrix " << m.getName() << std::endl;
	for (size_t i{}; i < m.getRows(); i++)
	{
		for (size_t j{}; j < m.getCols(); j++)
		{
			std::cout << "Element[" << (i + 1) << "][" << (j + 1) << "] = ";
			istr >> temp;
			m.setValue(i, j, temp);
		}
	}
	return istr;
}

//Operator Overloading of the assignment operator
Matrix& Matrix::operator = (Matrix& m)
{
	this->m_name = m.m_name;
	for (size_t i{}; i < this->m_rows; i++)
	{
		for (size_t j{}; j < this->m_cols; j++)
		{
			this->m_array[i][j] = m.m_array[i][j];
		}
	}
	return *this;
}

Matrix& Matrix::operator=(float** array)
{
	for (size_t i{}; i < this->m_rows; i++)
	{
		for (size_t j{}; j < this->m_cols; j++)
		{
			this->m_array[i][j] = array[i][j];
		}
	}
	delete[] array;
	return *this;
}

//Operator Overloading of the + operator
float** operator + (Matrix& m, Matrix& n)
{
	int temp = m.getRows();
	float** array = new float* [temp];
	temp = m.getCols();
	for (size_t i{}; i < m.getRows(); i++)
	{
		array[i] = new float[temp]{};
	}
	for (size_t i{}; i < m.getRows(); i++)
	{
		for (size_t j{}; j < m.getCols(); j++)
		{
			array[i][j] = m.getValues(i, j) + n.getValues(i, j);
		}
	}
	return array;
}

//Operator overloading of the ++ operator
Matrix& Matrix::operator ++(int)
{
	for (size_t i{}; i < this->m_rows; i++)
	{
		for (size_t j{}; j < this->m_cols; j++)
		{
			this->m_array[i][j]++;
		}
	}
	return *this;
}