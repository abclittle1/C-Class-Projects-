//This is a program that demonstrates how to use the Newton Raphson Method
#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	unsigned int interCount{}; //counting the number of iterations
	unsigned int maxIter{};		//the maximum number of iterations 

	float tol{}, //tolerance 
		error{}; //the calculated error 

	float x{}, //first value of x
		x_next{}; //next value of x

	float f_x{}, //function value of x
		f_xnext{}; //function value of x+1
	float f_derv; //derivative of f

	std::cout << " Enter the desired tolerance: ";
	std::cin >> tol;
	std::cout << " Enter the maximum number of iteration to determine the root: ";
	std::cin >> maxIter;

	std::cout << "Enter the initial guess of the root: "; \
	std::cin >> x;

	std::cout << "Iteration\t\t" << "root\t\t" << "Error" << std::endl;
	do {
		//NR Method
		interCount++;
		f_x = powf(x, 3.0f) - 2.0 * x - 5.0f; //given f(x)
		f_derv = 3.0f * pow(x, 2.0f) - 2.0f; //calculated f'(x)

		x_next = x - (f_x / f_derv);
		//Relative absolute error 
		error = fabsf((x_next - x) / x);

		std::cout << std::setw(9) << interCount << "\t\t" << std::setprecision(5) << x << "\t\t" << std::setprecision(5) << error << std::endl;

		x = x_next; //Update the approximate root 

	} while ((error > tol) && (interCount < maxIter));


	return (0);
}