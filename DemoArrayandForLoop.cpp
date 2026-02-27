/*
A program to compute the average temperature, maximum, minimum, and above below a temperature threshold of a week using array and for loops
*/

#include <iostream>
#include <iomanip>
#include <array>

int main()
{
	const unsigned DaysPerWeek = { 7 };

	//Define an array to store the temperature of each day of a week 
	/*Use variable names as to avoid using magic numbers */
	float temperatures[DaysPerWeek]{
		4.5f,10.5f,20.5f,30.0f,46.0f,-10.0f,-5.5f
	};

	float AverageTemperature{};
	for (size_t i{};i<DaysPerWeek;i++)
	{
		AverageTemperature += temperatures[i];	
	}

	AverageTemperature = AverageTemperature / static_cast<float>(DaysPerWeek); 

	//Display the temperature of each and the average 
	std::cout << "Size of the temperature vector is " << (sizeof(temperatures) / sizeof(temperatures[0])) << std::endl;
	for (size_t i{}; i < (sizeof(temperatures)/sizeof(temperatures[0])); i++) //never use magic numbers 
	{
		std::cout << "Day " << (i + 1) << temperatures[i] << std::endl;

	}
	std::cout << "Average Temperature: " << AverageTemperature << std::endl;

	//Determine the size of an aray (single dimension)
	std::cout << "Size of the temperature vector is " << std::size(temperatures) << std::endl; //size will give you the number of elements in a static vector 


	unsigned int DaysAboveAverage{}, DaysBelowAverage{};
	for (size_t i{}; i < std::size(temperatures); i++)
	{
		if (temperatures[i] >= AverageTemperature)
		{
			DaysAboveAverage++;
		}
		else {
			DaysBelowAverage++;
		}
	}
	std::cout << "number of days above average temperature is " << DaysAboveAverage << " and number of days below average temperature is " << DaysBelowAverage << std::endl;

	//Determine the maximum and minimum temperature
	float MaxTemperature{ temperatures[0] };
	for (size_t i{ 1u }; i < std::size(temperatures); i++)
	{
		if (temperatures[i] > MaxTemperature)
		{
			MaxTemperature = temperatures[i];
		}
	}

	float MinTemperature{ temperatures[0] };
	for (size_t i{ 1u }; i < std::size(temperatures); i++)
	{
		if (temperatures[i] < MaxTemperature)
		{
			MinTemperature = temperatures[i];
		}
	}
	std::cout << "The maximum temperature is: " << MaxTemperature << " and the minimum temperature is: " << MinTemperature << std::endl;

	//Proof of sequential memory locations of an array
	//Display tje address of each element in the array 
	//Use the address-of operator to obtain the address of a variable 
	for (size_t i{}; i < std::size(temperatures); i++)
	{
		std::cout << "Address of Elements[" << i << "]" << &temperatures[i] << std::endl;
	}

	std::cout << "Address of the array: " << temperatures << std::endl; //Address of an array is the address of the first element 

	//temperatures = temperatures + 4; //cannot do this in static array 

	//Issues with using floating point numbers to control the iterations of a for-loop

	const double pi{ 3.14159265359 };
	for (double radius{ 0.5 }; radius <= 3.0; radius += 0.5)
	{
		std::cout << std::fixed << std::setprecision(2) << "radius = " << std::setw(5) << radius << " area = " << std::setw(6) << (pi * radius * radius) << " delta to 3,0 = " << std::scientific << ((radius + 0.2) - 3.0) << std::endl;
	}
	return 0;
}