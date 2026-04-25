#include "Matrix.h"

Matrix::Matrix(std::string name, int rows, int cols)
{
	this->m_name = name;
	std::cout << "constructing Matrix " << this->m_name << std::endl;
	this->m_rows = rows;
	this->m_cols = cols;
	this->m_array = new float* [this->m_rows];
	for (int i{ 0 }; i < this->m_rows; i++)
	{
		this->m_array[i] = new float[this->m_cols];
	}
}

//Destructor
Matrix::~Matrix()
{
	std::cout << "Destroying the Matrix " << this->m_name << std::endl;
	for (size_t i{}; i < this->m_rows; i++)
	{
		delete[] this->m_array[i];
	}
	delete[] this->m_array;
}

std::string Matrix::getName() const
{
	return this->m_name;
}

int Matrix::getRows() const
{
	return this->m_rows;
}

int Matrix::getCols() const 
{
	return this->m_cols;
}

float Matrix::getValues(size_t k, size_t l) const
{
	return this->m_array[k][l];
}

void Matrix::setValue(size_t k, size_t l, float value)
{
	this->m_array[k][l] = value;
}

