//This program is implementing the bisection method for numerical analysis
#include <iostream>
#include <iomanip>

int main()
{
	unsigned int iterCount{}; //Counts the number of iterations
	unsigned int maxIter{};		//The max number of iterations the program will perform 

	float a{}, //The first guess of the root
		b{},	//The second guess of the root 
		x{},	//The approximate root at the ith iteration
		xprev{}; //The approximate root at the (i-1) iteration 

	float f_a{}, //The function value at x = a
		f_b{},	//The function value at x=b
		f_x{}; //The function

	float tol{}, //Desired tolerance of the equation
		 error{};	//the error of the rooth at the ith iteration

	float bracket{}; //the length of the bracket which is |b-a|

	//Display the equation to be solved 
	std::cout << "The non-linerar equation to be solved " << std::endl;
	std::cout << "y=f(x) = x^3-x-1.0=0.0" << std::endl;

	//Enter the desired tolerance 
	std::cout << "Enter the desired tolerance: ";
	std::cin >> tol;

	//Enter the maximum number of iterations 
	std::cout << "Enter the maximum number of iterations: ";
	std::cin >> maxIter;

	//Enter the first guess of the root 
	std::cout << "Enter the first guess of the root: ";
	std::cin >> a;

	//Enter the second guess of the root 
	std::cout << "Enter the second guess of the root: ";
	std::cin >> b;

	//Compute f(a) and f(b)
	f_a = powf(a, 3.0f) - a - 1.0f;
	f_b = powf(b, 3.0f) - b - 1.0f;

	//Check for the existance of a root between a and b 
	if ((f_a * f_b) > 0.0f)
	{
		std::cout << "The function values at a and b are resprectively " << f_a << " and " << std::endl;
		std::cout << " No root exists between " << a << " and " << b << std::endl;
		std::cout << "Exiting the program";
		return 0; 
	}

	//Compute the mid-point between a and b 
	x = (a + b) / 2.0f;
	error = fabsf((x - a) / a); //absolute relative approximate error 
	if (error <= tol)
	{
		x = a;
		std::cout << "One of the roots of f(x) is " << x << std::endl;
		return 0; 
	}

	error = fabsf((x - b) / b); //absolute relative approximate error 
	if (error <= tol)
	{
		x = b;
		std::cout << "One of the roots of f(x) is " << x << std::endl;
		return 0;
	}

	f_x = powf(x, 3.0f) - x - 1.0f;

	std::cout << "Iteration\t" << "a\t" << "b\t" << "x\t" << "f(x)\t\t" << "Error\t\t" << "Bracket Length" << std::endl;

	do {
		xprev = x; //Save the new root 
		if ((f_x * f_a) < 0.0f) //The root exists between these two points a and the midpoint 
		{
			b = x;
		}
		else {
			a = x;
		}
		x = (a + b) / 2.0f; //Compute the new root as the middle point of the updated bracket 

		f_x = powf(x, 3.0f) - x - 1.0f; //Function value at the new root 
		error = fabsf((x - xprev) / xprev);
		iterCount++;
		bracket = fabsf(b - a) / powf(2.0f, static_cast<float>(iterCount));
		
		std::cout << iterCount << "\t\t" << a <<
			"\t" << std::setprecision(5) << b <<
			"\t" << std::setprecision(5) << x <<
			"\t" << std::setprecision(5) << f_x <<
			"\t" << std::setprecision(5) << error <<
			"\t" << std::setprecision(5) << bracket << std::endl;

	} while ((error > tol) && (iterCount < maxIter));




	return 0;
}
