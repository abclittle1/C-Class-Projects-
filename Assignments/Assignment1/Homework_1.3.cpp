//Abigail Little EE 4075 Assignment 1 Problem 3

#include <iostream>
#include <iomanip>
#include <cmath>

constexpr auto tol{ 0.001f };

int main()
{
	//Define the variables 
	float t_a{}, v{};

	std::cout << "Calculating the windchill given the temperature and windspeed" << std::endl;

	//User enters a value for the temperature within the range 
	std::cout << " Enter a value for the temperature between -58 F and 41 F. ";
	std::cin >> t_a;

	//User enters a value for the wind speed within the range 
	std::cout << " Enter a value for the windspeed that is greater than 2.0 mph. ";
	std::cin >> v;

	if (t_a < -58 || t_a>41)
	{
		std::cout << "The entered temperature value is not within the given range. " << std::endl;
		return 0;
	}

	if (v < 2.0f)
	{
		std::cout << "The entered windspeed value is less than 2.0 mph. " << std::endl;
		return 0;
	}

	//We have set the conditions for which the formula will not work, so now we must calculate the windchill
	float powervelocity = static_cast<float>(pow(v, 0.16)); //This variable allows us to call the v^0.16 term easily
	float termtwo = 0.6215 * t_a; //This is the second term of the equation
	float termthree = 35.75 * powervelocity; //This is the third term of the equation
	float termfour = 0.4272 * t_a * powervelocity; //This is the fourth term of the equation

	//We can now calculate the windchill 
	float windchill = 35.74 + termtwo - termthree + termfour;

	//Displaying the caluclated value 
	std::cout << " The windchill for a temperature of " << t_a << " and a windspeed of " << v << " is " << windchill << std::endl;
	return 0; 
}
