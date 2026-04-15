/* A Program to determine the roots of non-linear equations
using the Secant method*/

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	std::cout << "The program computes the roots of the non-linear equation\n x^3 - sinh(x) + 4.0x^2 + 6.0x + 9.0" << std::endl << std::endl;

	unsigned int IterCount{};
	unsigned int MaxIter{};

	float tol{}, //The desired tolerance of the root
		error{};//The error of the root at the ith iteration

	float x_i0{}, x_i1{}, x_i2{}; //The variables store the values of x_i, x_i+1, and x_i+2

	float f_xi0{}, f_xi1{}, f_xi2{}; //The variables to store the function values at x_i, x_i+1, and x_i+2

	/*Write code to prompt the user to input the desired tolerance
	      and store the tolerance in the appropriate variable*/
	std::cout << "Enter the desired tolerance: ";
	std::cin >> tol;

	/*Write code to prompt the user to input the desired maximum number of iterations
	      and store the maximum iterations in the appropriate variable*/
	std::cout << "Enter the maximum number of iterations to determine the root: ";
	std::cin >> MaxIter;

	/*Write code to prompt the user to input the two initial guesses
	and store the two initital guesses in the appropriate variables*/
	std::cout << "Enter your first two guesses of the root seperated by a space: ";
	std::cin >> x_i0 >> x_i1;


	std::cout << "Iteration\t\t" << "root\t\t" << "Error" << std::endl;

	do {
		IterCount++;
		//Compute the function values at x_i, and x_i+1
		//Function value at x_i
		f_xi0 = pow(x_i0, 3.0f) - sinh(x_i0) + 4.0 * pow(x_i0, 2.0f) + 6.0 * x_i0 + 9.0;

		//Function value at x_i+1
		f_xi1 = pow(x_i1, 3.0f) - sinh(x_i1) + 4.0 * pow(x_i1, 2.0f) + 6.0 * x_i1 + 9.0;

		//Compute the next approximate root x_i+2 using the Secant Method
		x_i2 = x_i1 - (f_xi1 * (x_i1 - x_i0)) / (f_xi1 - f_xi0); //Function given by (3)

		//Compute the error between the current and previous approximate roots
		error = fabsf((x_i2 - x_i1) / x_i2);

		//Display the iteration, root, and error
		std::cout << std::setw(9) << IterCount << "\t\t" << std::setprecision(5) << x_i2 << "\t\t" << std::setprecision(5) << error << std::endl;

		//Update appropriately the x_i and x_i+1 for the next iteration
		x_i0 = x_i1;
		x_i1 = x_i2;
		
	} while ((error > tol) && (IterCount < MaxIter));
	return 0;
}