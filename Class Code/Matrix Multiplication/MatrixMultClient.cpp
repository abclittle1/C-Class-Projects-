#include <iostream>

#define ROWS_MAX 100
#define COLS_MAX 100

int main()
{
	int nRowsA, nColsA,
		nRowsB, nColsB,
		nRowsC, nColsC;

	std::cout << "Maximum Matrix Size Allowed: " << ROWS_MAX << " x " << COLS_MAX << std::endl;
	
	std::cout << "Enter the Number of desired rows of Matrix A: ";
	std::cin >> nRowsA;
	std::cout << "Enter the Number of desired columns of Matrix A: ";
	std::cin >> nColsA;

	std::cout << "Enter the Number of desired rows of Matrix B: ";
	std::cin >> nRowsB;
	std::cout << "Enter the Number of desired columns of Matrix B: ";
	std::cin >> nColsB;

	//Check whether the Matrix Dimensions are less than the Maximum Allowed Size
	//Write code to check whether the Matrix Dimensions are less than the Maximum Allowed Size
	if (nRowsA>ROWS_MAX||nColsA>COLS_MAX)
	{
		std::cout << "Dimensions of Matrix A is larger than the maximum allowed dimensions " << " A(" << nRowsA << " x " << nColsA << ")" << std::endl;
			return 0;
	}
	if (nRowsB > ROWS_MAX || nColsB > COLS_MAX)
	{
		std::cout << "Dimensions of Matrix B is larger than the maximum allowed dimensions " << " B(" << nRowsB << " x " << nColsB << ")" << std::endl;
		return 0;
	}

	//Write code to check whether the Matrix Dimensions are suitable of multiplication
	if (nColsA != nRowsB)
	{
		std::cout << "The inner dimension of matrics A and B are not equal for multiplication" << std::endl;
		return 0;
	}
	
	//Write code to set the dimensions of Matrix C equal to the product dimension of AxB
	nRowsC = nRowsA;
	nColsB = nColsB;

	//Allocate memory for storing the elements of the matrices A, B and C for the maximum size
	float MatrixA[ROWS_MAX][COLS_MAX],
		MatrixB[ROWS_MAX][COLS_MAX],
		MatrixC[ROWS_MAX][COLS_MAX];	

	//Prompt user to enter the elements of Matrix A
	std::cout << "Enter the elements of Matrix A" << std::endl;
	for (size_t i{}; i < nRowsA; i++)
	{
		for (size_t j{}; j < nColsA; j++)
		{
			std::cout << "A[" << (i + 1) << "][" << (j + 1) << "] = ";
			std::cin >> MatrixA[i][j];
		}
	}
	//Prompt user to enter the elements of Matrix B
	std::cout << "Enter the elements of Matrix B" << std::endl;
	for (size_t i{}; i < nRowsB; i++)
	{
		for (size_t j{}; j < nColsB; j++)
		{
			std::cout << "B[" << (i + 1) << "][" << (j + 1) << "] = ";
			std::cin >> MatrixB[i][j];
		}
	}

	
	std::cout << "Matrix A" << std::endl;
	//Write code  to display the user entered matrix A
	for (size_t i{}; i < nRowsA; i++)
	{
		for (size_t j{}; j < nColsA; j++)
		{
			std::cout << MatrixA[i][j] << "\t";
		}
		std::cout << std::endl;
	}

	std::cout << "Matrix B" << std::endl;
	//Write code  to display the user entered matrix B
	for (size_t i{}; i < nRowsB; i++)
	{
		for (size_t j{}; j < nColsB; j++)
		{
			std::cout << MatrixB[i][j] << "\t";
		}
		std::cout << std::endl;
	}

	//Write code to implement Matrix Multiplication
	float fSum;
	for (size_t i{}; i < nRowsA; i++)
	{
		for (size_t j{}; j < nColsA; j++)
		{
			MatrixC[i][j] = MatrixA[i][j] + MatrixB[i][j];
		}
		
	}

	//Write code to display the computed product
	std::cout << "Matrix C" << std::endl;
	
	return 0;
}
