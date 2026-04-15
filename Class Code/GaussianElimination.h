#pragma once

#include <iostream>
#include <iomanip>

class CLinearEquations //Define Class 
{
private:
	size_t m_nNumberOfVar; //Number of unknowns 
	double **m_fCoefficents; //Pointer-to-Pointer to allocate memory dynamically for the matrix (a)
	double *m_fConstants; //b vector 
	double *m_fUnknowns; //x 
	
	//Gauss Jordan - find the inverse of (a) 
	double **m_fCoeffInverse;
	
	// Number of Flops //Floating Point Operations Per Second 
	unsigned int m_MultiFlops;
	unsigned int m_DivFlops;
	unsigned int m_AddFlops;
public:
	// Gaussian Elimination Solution
	CLinearEquations(int nNumberOfVar);
	void OnTriangulate(); //Finding the upper trianglular 
	void OnBackSubtitute(); //Back substitute
	void OnDisplayFlops(); //Display flops 

	//Determinant of the Matrix
	double OnComputeDeterminant();
	
	// Gauss Jordan Solution
	void OnComputeInverse();
	void OnFormIdentity();
	void OnComputeSolution();

	//Input and Output
	void InputEquations();
	void DisplayEquations();
};

