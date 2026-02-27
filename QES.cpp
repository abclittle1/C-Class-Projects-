//This problem will solve a quadratic equation

#include <iostream>
#include <iomanip>
#include <cmath>
//#define tol 0.001 - C-style constant declerations 

//Define a constant with initlization 
constexpr auto tol{ 0.001f };

int main()
{
	//Define variables to store the values of a,b, and c
	float a{}, b{}, c{};
	std::cout << "Solving the Quadratic Question: ax^2 + bx + c = 0"<< std::endl;
	std::cout << "Enter the values of coefficient a: ";
		std::cin >> a;

		std::cout << "Enter the values of coefficient b: ";
		std::cin >> b;

		std::cout << "Enter the values of coefficient c: ";
		std::cin >> c;

	//Display the user entered QE
	std::cout << a << "x^2" << std::showpos << b << "x" << c << std::noshowpos << std::endl;

	//Compute 2a and check validity 
	float denom{ 2.0f * a };
	std::cout << "2a = " << std::setprecision(2) << denom << std::endl;

	//Check for validity 
	//It is also important to consider negative numbers. When using this, remember to note the differences between Fabs and abs
	if (denom < tol)
	{
		std::cout << "the value of the coefficient a " << a << " is small and roots cannot be computed, and exiting the program" << std::endl;
		return 0; 
	}

	float discriminant{ powf(b,2.0f) - (4.0f * a * c) }; //Calculate the discriminant and store it as a variable 
	std::cout << "b^2-4ac = " << discriminant << std::endl;

	if (discriminant >= 0.0) //Conditions where real roots exist 
	{
		float root1{ (-b + sqrtf(discriminant)) / denom };
		float root2{ (-b + sqrtf(discriminant)) / denom };

		std::cout << "The first root of " << a << "x^2" << std::showpos << b << "x" << c << std::noshowpos << " is " <<  root1 << std::endl;
		std::cout << "The second root of " << a << "x^2" << std::showpos << b << "x" << c << std::noshowpos << " is " <<  root2 << std::endl;
	}
	else {
		float root1_real{ -b / denom };
		float root1_imag{ sqrtf(-discriminant) };
		/*fancier, but makes program slower 
		float root1_imag{ sqrtf(fabs(discriminant)) };
		*/
		float root2_real{ root1_real };
		float root2_imag{ -root1_imag };

		std::cout << "The first complex root is" << root1_real << std::showpos << std::showpos << root1_imag << "j" << std::endl << std::noshowpos;

		std::cout << "The second complex root is" << root2_real << std::showpos << std::showpos << root2_imag << "j" << std::endl << std::noshowpos;
	}




	return 0;
}