#include "Matrix.h"

int main()
{
	//CMatrix MatrixA("A", 2, 2);
	//std::cin >> MatrixA;
	//std::cout << MatrixA;


	//CMatrix MatrixB("B", 2, 2);
	//std::cin >> MatrixB;
	//std::cout << MatrixB;

	//CMatrix MatrixC("C", 2, 2);
	///*std::cin >> MatrixC;
	//std::cout << MatrixC;*/

	//MatrixC = MatrixA + MatrixB;
	//std::cout << MatrixC;

	//CMatrix MatrixD("D", 2, 2);
	////std::cin >> MatrixD;
	////std::cout << MatrixD;
	//MatrixD = MatrixC++;
	//std::cout << MatrixD;

	//std::cout << MatrixC;
	//std::cout << "Implementing C = C + D++" << std::endl;
	//MatrixC = MatrixC + (MatrixD++);
	//std::cout << MatrixC;

	//std::cout << "Using index operator to set an element in the matrix" << std::endl;
	//MatrixD[0][1] = -0.5;
	//std::cout << MatrixD;

	CMatrix MatrixE("E", 3, 3);
	std::cin >> MatrixE;
	std::cout << MatrixE;

	std::cout << "Matrix E(2,2) = " << MatrixE(2, 2) << std::endl; 

	std::cout << "Trace of Matrix E = " << MatrixE() << std::endl;

	return 0;
}