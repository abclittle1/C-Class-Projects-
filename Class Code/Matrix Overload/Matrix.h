#pragma once
#include <iostream>
#include <string>


class Matrix {
private:
	std::string m_name{};
	int m_rows{};
	int m_cols{};
	float** m_array{};
public:
	Matrix(std::string name, int rows, int cols);
	~Matrix(); //Destructor
	
	//getter functions
	std::string getName() const;
	int getRows() const;
	int getCols() const;
	float getValues(size_t k, size_t l) const;

	//Setter Functions
	void setValue(size_t k, size_t l, float value);

	//Operator Overloading of the assignment = operator
	Matrix& operator = (Matrix& m);
	Matrix& operator = (float** array);

	//Operator overloading of the ++ operator
	Matrix& operator ++(int);
};

//Prototype of the Overloaded operator << function
std::ostream& operator << (std::ostream& ostr, const Matrix& m);
//Prototype of the Overloaded operator >> function
std::istream& operator >> (std::istream& istr, Matrix& m);

//Prototype of the Operator Overloading of the + operator
float** operator + (Matrix& m, Matrix& n);
