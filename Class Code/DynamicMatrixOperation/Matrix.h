#pragma once
#include <iostream>

class CMatrix
{
private:
	std::string m_Name;
	unsigned int m_nRows;
	unsigned int m_nCols;
	//Define a pointer-to-pointer as a data member
	float** m_fMatrix;
public:
	CMatrix(std::string name, unsigned int nRows, unsigned int nCols);
	void OnGetMatrix();
	void OnDisplayMatrix();
	//Define a member function to add two matrices
	//void OnAddMatrices(CMatrix Mat1, CMatrix Mat2);
	void OnAddMatrices(CMatrix& Mat1, CMatrix& Mat2);

	//Define a destructor to release the heap memory
	~CMatrix();
};
