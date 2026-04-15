#include "MatrixOperations.h"

bool OnContinue()
{
	int temp;
	std::cout << "Enter 1 to continue or 0 to exit: ";
	std::cin >> temp;
	if (temp == 1)
	{
		return true;
	}
	else if (temp == 0)
	{
		return false;
	}
	else {
		return 0;
	}
}

bool OnGetMatrixDimension(std::string name, int *nRowsTemp, int *nColsTemp)
{
	std::cout << "Enter the number of Rows of Matrix " << name << ": ";
	std::cin >> *nRowsTemp;

	std::cout << "Enter the number of Columns of Matrix " << name << ": ";
	std::cin >> *nColsTemp;

	return OnCheckDimensions(*nRowsTemp, *nColsTemp);
}

bool OnCheckDimensions(int nRowsTemp, int nColsTemp)
{
	if (nRowsTemp > MAX_ROWS || nColsTemp > MAX_COLS)
	{
		std::cout << "Matrix Dimensions are greater than the allowed maximum dimensions" << std::endl;
		return false;
	}
	return true;
}

bool OnCheckDimForAddition(int nRowsTemp_A, int nColsTemp_A, int nRowsTemp_B, int nColsTemp_B, int *pRowsC, int* pColsC)
{
	if ((nRowsTemp_A == nRowsTemp_B) && (nColsTemp_A == nColsTemp_B))
	{
		*pRowsC = nRowsTemp_A;
		*pColsC = nColsTemp_A;
		return true;
	}
	else {
		std::cout << "Due to dimension mismatch, Matrix Addition is not possible" << std::endl;
		return false;
	}
}

bool OnCheckDimForMultiplication(int nRowsTemp_A, int nColsTemp_A, int nRowsTemp_B, int nColsTemp_B, int *pRowsC, int* pColsC)
{
	if (nColsTemp_A == nRowsTemp_B)
	{
		*pRowsC = nRowsTemp_A;
		*pColsC = nColsTemp_B;
		return true;
	}
	else {
		std::cout << "Due to dimension mismatch, Matrix Multiplication is not possible" << std::endl;
		return false;
	}
}

void OnGetMatrix(std::string name, int Matrix[][MAX_COLS], int nRowsTemp, int nColsTemp)
{
	std::cout << "Enter values of Matrix " << name << std::endl;
	for (int i = 0;i < nRowsTemp;i++)
	{
		for (int j = 0;j < nColsTemp;j++)
		{
			std::cout << name << "[" << (i + 1) << "][" << (j + 1) << "] = ";
			std::cin >> Matrix[i][j];
		}
	}
}

void OnDisplayMatrix(std::string name, int Matrix[][MAX_COLS], int nRowsTemp, int nColsTemp)
{
	std::cout << "Matrix " << name << std::endl;
	for (int i = 0;i < nRowsTemp;i++)
	{
		for (int j = 0;j < nColsTemp;j++)
		{
			std::cout << Matrix[i][j] << '\t';
		}
		std::cout << std::endl;
	}
}