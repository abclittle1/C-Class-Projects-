//Abigail Little EE4075 Assignment 1 Problem 1 Solution 

#include <iostream> //allows for user inputs and outputs 
#include <cmath>	//allows for math functions to be called
#include <iomanip>	//used to manipulate the precision of the values 

constexpr auto tol{ 0.01f }; //Will be used to make sure that the proper angles are calculated

int main()
{
	//Define variables a,b, and c
	float a{}, b{}, c{};

	//Defining a value for pi 
	constexpr double pi = 3.14159265358979;

	std::cout << "Determining the type of triangle and it's area for a triangle with sides a, b, and c " << std::endl;

	//Prompt the user to enter the values of the sides 
	std::cout << "Enter the value of side a: ";
	std::cin >> a;

	std::cout << "Enter the value of side b: ";
	std::cin >> b;

	std::cout << "Enter the value of side c: ";
	std::cin >> c;

	//Check that a > tol; b > tol; c > tol. We must check for a tolerance so that law of cosines can be used to calculate the angle. 
	if (a < tol || b < tol || c < tol)
	{
		std::cout << "The length of a side entered is less than the tolerance. ";
		return 0;
	}

	//The final step before finding the type of triangle is to ensure that the entered values produce a valid triangle using the triangle inequality formula
	if (a + b < c || a + c < b || b + c < a) //Triangle inequality conditions that make the equation false 
	{
		std::cout << "The entered values cannot form a triangle. ";
		return 0;
	}

	//Now that we have accounted for the scenarios in which the type of triangle cannot be found, we must identify the type of triangle based on the given information 

	//The first step is to calculate the angles of the triangle
	
	//Defining necessary variables 
	double a_squared = a * a; //Allows for a^2 to be called quicker
	double b_squared = b * b; //Allows for b^2 to be called quicker
	double c_squared = c * c; //Allows for c^2 to be called quicker 

	//Finding the cosine of each angle 
	double cosA = (b_squared + c_squared - a_squared) / (2.0 * b * c);
	double cosB = (a_squared + c_squared - b_squared) / (2.0 * a * c);
	double cosC = (b_squared + a_squared - c_squared) / (2.0 * b * a);

	//The values must be converted to degrees for determining the type of triangle

	double angleA = acos(cosA) * 180.0 / pi;
	double angleB = acos(cosB) * 180.0 / pi;
	double angleC = acos(cosC) * 180.0 / pi;

	//We will now display the calculated angle values 
	std::cout << "The value of angle A is " << angleA << " degrees" << std::endl;
	std::cout << "The value of angle B is " << angleB << " degrees" << std::endl;
	std::cout << "The value of angle C is " << angleC << " degrees" << std::endl;

	//We can now determine the type of triangle

	constexpr float tol = 0.00001; //Prevents errors from differences in number of significant digits used 

	//Equilateral 
	if (abs(angleA - 60) < tol && (abs(angleB - 60) < tol) && (abs(angleC - 60) < tol))  //The absolute value prevents misidentification of triangle type
	{
		std::cout << "The triangle with sides a = " << a << "; b = " << b << " and c = " << c << " is an equilateral triangle. " << std::endl;
	}
	
	//Right Triangle 
	else if (abs(angleA - 90) < tol || (abs(angleB - 90) < tol) || (abs(angleC - 90) < tol)) //The absolute value prevents misidentification of triangle type
	{
		std::cout << "The triangle with sides a = " << a << "; b = " << b << " and c = " << c << " is a right triangle. " << std::endl;
	}

	//Obtuse Triangle 
	else if (angleA > 90 || angleB > 90 || angleC > 90)
	{
		std::cout << "The triangle with sides a = " << a << "; b = " << b << " and c = " << c << " is an obtuse triangle. " << std::endl;
	}

	//Acute
	else
	{
		std::cout << "The triangle with sides a = " << a << "; b = " << b << " and c = " << c << " is an acute triangle. " << std::endl;
	}
	
	//Now that the type of triangle has been found, the area can be calculated
	//Formula is Area = sqrt(s(s-a)(s-b)(s-c))

	float s = (a + b + c) / 2; //Gives a value for s
	float diffa = s - a; //The difference between s and a
	float diffb = s - b; //The difference between s and b
	float diffc = s - c; //The difference between s and a

	float sabc = s * (s - a) * (s - b) * (s - c); //This is the value of the radicand 

	float area = sqrt(sabc); //Finds the area

	std::cout << "The area for this triangle is " << area << std::endl;


	return 0;
}
