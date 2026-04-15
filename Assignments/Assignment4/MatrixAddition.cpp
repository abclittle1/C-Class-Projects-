#include "MatrixOperations.h"

void OnMatrixAddition(int MatrixTempA[][MAX_COLS], int nRowsTemp_A, int nColsTemp_A,
	int MatrixTempB[][MAX_COLS],
	int MatrixTempC[][MAX_COLS])
{
	//Write code to add two matrices of equal dimensions
	float fSum;
	for (size_t i{}; i < nRowsTemp_A; i++)
	{
		for (size_t j{}; j < nColsTemp_A; j++)
		{
			MatrixTempC[i][j] = MatrixTempA[i][j] + MatrixTempB[i][j];
		}

	}

}
