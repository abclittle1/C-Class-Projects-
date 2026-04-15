//A Program to demonstrate Basic Matrix Operations
#include <iostream>
#include <iomanip>
#include "MatrixOperations.h"


int main()
{
	int MatrixA[MAX_ROWS][MAX_COLS],
		MatrixB[MAX_ROWS][MAX_COLS],
		MatrixC[MAX_ROWS][MAX_COLS];

	int nRowsMatrixA,
		nColsMatrixA,
		nRowsMatrixB,
		nColsMatrixB,
		nRowsMatrixC,
		nColsMatrixC;

	int nSelection;
	
	do {
		std::cout << "Enter 1 for Addition and 2 for Multiplication: ";
		std::cin >> nSelection;
		//Write code to choose matrix operation using switch and case statements
		switch (nSelection)
		{
			case 1: //note the colon not the semicolon 
				if (!OnGetMatrixDimension("A", &nRowsMatrixA, &nColsMatrixA))
				{
					continue;
				}
				if (!OnGetMatrixDimension("B", &nRowsMatrixB, &nColsMatrixB))
				{
					continue;
				}
				if (!OnCheckDimForAddition(nRowsMatrixA, nColsMatrixA, nRowsMatrixB, nColsMatrixB, &nRowsMatrixC, &nColsMatrixC))
				{
					continue; 
				}
				OnGetMatrix("A", MatrixA, nRowsMatrixA, nColsMatrixA);

				OnGetMatrix("B", MatrixB, nRowsMatrixB, nColsMatrixB);

				OnDisplayMatrix("A", MatrixA, nRowsMatrixA, nColsMatrixA);

				OnDisplayMatrix("B", MatrixB, nRowsMatrixB, nColsMatrixB);
				
				OnMatrixAddition(MatrixA, nRowsMatrixA, nColsMatrixA, MatrixB, MatrixC);
				
				std::cout << "C = A + B" << std::endl;
				
				OnDisplayMatrix("C", MatrixC, nRowsMatrixC, nColsMatrixC);
				break; //always the last line of a case statement
			
			case 2:
				if (!OnGetMatrixDimension("A", &nRowsMatrixA, &nColsMatrixA))
				{
					continue;
				}
				if (!OnGetMatrixDimension("B", &nRowsMatrixB, &nColsMatrixB))
				{
					continue;
				}
				if (!OnCheckDimForMultiplication(nRowsMatrixA, nColsMatrixA, nRowsMatrixB, nColsMatrixB, &nRowsMatrixC, &nColsMatrixC))
				{
					continue;
				}
				OnGetMatrix("A", MatrixA, nRowsMatrixA, nColsMatrixA);

				OnGetMatrix("B", MatrixB, nRowsMatrixB, nColsMatrixB);

				OnDisplayMatrix("A", MatrixA, nRowsMatrixA, nColsMatrixA);

				OnDisplayMatrix("B", MatrixB, nRowsMatrixB, nColsMatrixB);

				OnMatrixMultiplication(MatrixA, nRowsMatrixA, nColsMatrixA, MatrixB,nRowsMatrixB,nColsMatrixB, MatrixC);
				
				std::cout << "C = A * B" << std::endl;

				OnDisplayMatrix("C", MatrixC, nRowsMatrixC, nColsMatrixC);
				
				break;

			default: //can only be first or last, but not between 
				break;

		}

	} while (OnContinue());
	return 0;
}