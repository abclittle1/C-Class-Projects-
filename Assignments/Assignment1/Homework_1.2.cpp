//Abigail Little EE 4075 Homework 1 Problem 2
#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	//Define the variables for radius and height 
	float r{}, h{};
	
	std::cout << "Finding the area of a volume with radius, r, and height, h. ";

	//Enter the height and radius values 
	std::cout << "Please enter the height of the cylinder: ";
	std::cin >> h;

	std::cout << "Please enter the radius of the cylinder: ";
	std::cin >> r;

	//The height and radius must be positive, so we must ensure that it does not calculate for negative numbers 
	if (r <= 0 || h <= 0)
	{
		std::cout << "the height and the radius must be greater than zero" << std::endl;
		//std::cout << "The entered values for height and/or radius must be greater than zero. " << std::endl;
		return 0;
	}

	//We will now find the area 
	constexpr double pi = 3.14159265358979; //value of pi

	//Formula for area: 2*pi*r*(r+h)
	float productofinput = r * (r + h);
	float area = 2.0f * pi * productofinput;

	//Displaying the output 
	std::cout << "The area of the cylinder with height " << h << " and radius " << r << " is: " << area << std::endl;

	//The next step is to find the volume 
	float r_squared = r * r;

	//Forumla for volume: pi*r^2
	float volume = pi * r_squared * h;

	//Displaying the output 
	std::cout << "The volume of the cylinder with height " << h << " and radius " << r << " is: " << volume << std::endl;

	return 0;
}

	
