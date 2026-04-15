#include "MatrixOperations.h"

void OnMatrixMultiplication(int MatrixTempA[][MAX_COLS], int nRowsTemp_A, int nColsTemp_A,
	int MatrixTempB[][MAX_COLS], int nRowsTemp_B, int nColsTemp_B,
	int MatrixTempC[][MAX_COLS])
{
	int nTemp;
	//Write code to perform multiplication
	for (size_t i{}; i < nRowsTemp_A; i++) //A for loop to iterate through the rows for multiplication
	{
		for (size_t j{}; j < nColsTemp_B; j++) //A loop to iterate through the columns for multiplication
		{
			nTemp = 0.0f;
			for (size_t k{}; k < nColsTemp_A; k++) //k is compared to the inner dimension 
			{
				nTemp += (MatrixTempA[i][k] * MatrixTempB[k][j]);
			}
			MatrixTempC[i][j] = nTemp;
		}
	}


}
