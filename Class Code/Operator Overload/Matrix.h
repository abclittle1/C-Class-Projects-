#pragma once
#include <iostream>

class CMatrix
{
private:
	unsigned int m_nRows;
	unsigned int m_nCols;
	std::string m_szName;
	float** m_fArray;
public:
	CMatrix(std::string name, unsigned int nRows, unsigned int nCols);
	~CMatrix();

	//Operator Overloading
	CMatrix& operator = (CMatrix& matrix);
	CMatrix& operator = (float** array);

	//Overloading the ++ operator
	CMatrix& operator ++(int);

	//Overload index operator []
	float* operator [] (int nIndex);

	//Overloading the index operator ()
	float operator ()(int nRow, int nCols);

	//Overload operator ()() - to compute the trace of a matrix
	float operator()();

	//Operator Overload of + as a friend function 
	friend float** operator + (const CMatrix& matA, const CMatrix& matB);

	//Interface Operator Overloading
	friend std::ostream& operator <<(std::ostream& os, const CMatrix& matrix);
	friend std::istream& operator >>(std::istream& istr, CMatrix& matrix);
};

//Global function prototypes of << and >> operators
std::ostream& operator <<(std::ostream& os, const CMatrix& matrix);
std::istream& operator >>(std::istream& istr, CMatrix& matrix);

//Global function of + operator 
float** operator + (const CMatrix& matA, const CMatrix& matB);




