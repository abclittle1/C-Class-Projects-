#include "Matrix.h"

int main()
{
	Matrix A("A", 3, 3),
		B("B", 3, 3),
		C("C", 3, 3);

	std::cin >> A;
	std::cout << A;

	B = A;
	std::cout << B;

	C = A + B;
	std::cout << C;

	//Incrementing the values of C
	C++;
	std::cout << C;
	return 0;
}