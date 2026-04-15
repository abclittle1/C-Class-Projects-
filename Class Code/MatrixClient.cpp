#include "Matrix.h"

int main()
{
	//Instaniate three Matrix object
	CMatrix MatrixA("A", 2, 2);
	CMatrix MatrixB("B", 2, 2);

	//if (1)	//destroys this object before running the rest of the code because matrixC goes out of the scope, it was defined in the scope of the if
	//{
	//	CMatrix MatrixC("C", 3, 3);
	//}

	//Call the appropriate member function to get the matrix data from the user
	MatrixA.OnGetMatrix();

	//Call the appropriate member function to display the matrix
	MatrixA.OnDisplayMatrix();

	//Call the appropriate member function to get the matrix data for B from the user
	MatrixB.OnGetMatrix();

	//Call the appropriate member function to display the matrix B
	MatrixB.OnDisplayMatrix();

	//Call the appropriate member function to add two matrices
	CMatrix MatrixSum("Sum", 2, 2);
	MatrixSum.OnAddMatrices(MatrixA, MatrixB);

	std::cout << "Sum = A + B" << std::endl;
	//Call the appropriate member function to display the matrix addition results
	MatrixSum.OnDisplayMatrix();

	return 0;
}