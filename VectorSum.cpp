/*
A program to perform addition of two vectors 
*/

#include <iostream>
#include <iomanip>
#include <array>

int main()
{
	const unsigned int MAXSIZE{ 100 };
	unsigned int cols{};

	std::cout << "Enter the size of the vectors to add: ";
	std::cin >> cols;

	if (cols < 1u || cols > MAXSIZE)
	{
		std::cout << "You have entered an invalid size of vector. Exiting the program.";
		return 0;
	}

	float A[MAXSIZE]{}, B[MAXSIZE]{}, C[MAXSIZE]{};
	//Obtain the values of the elements of the vectors A and B
	for (size_t i{}; i < cols; i++)
	{
		std::cout << "A[" << (i + 1) << "]";
		std::cin >> A[i];
	}
	for (size_t i{}; i < cols; i++)
	{
		std::cout << "B[" << (i + 1) << "]";
		std::cin >> B[i];
	}

	//Add the two vectors 
	for (size_t i{}; i < cols; i++)
	{
		C[i] = A[i] + B[i];
	}

	//Display the vector addition
	for (size_t i{}; i < 3; i++)
	{
		std::cout << "B: ";
		if (i == 0)
		{
			for (size_t j{}; j < cols; j++)
			{
				std::cout << A[j] << '\t';
			}
			std::cout << std::endl;
		}
		if (i == 1)
		{
			for (size_t j{}; j < cols; j++)
			{
				std::cout << B[j] << '\t';
			}
			std::cout << std::endl;
		}
		if (i == 2)
		{
			for (size_t j{}; j < cols; j++)
			{
				std::cout << C[j] << '\t';
			}
			std::cout << std::endl;
		}
	}
	return 0;
}