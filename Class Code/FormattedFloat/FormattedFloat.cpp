#define _USE_MATH_DEFINES 
#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	//display the value of pi to a desired precision

	float data1{ M_PI }; 
	std::cout << "PI = " << data1 << std::endl;

	//Change the notation to scientific 
	std::cout << std:: scientific << "PI = " << data1 << std::endl;

	float data2{ 1.68985678 };
	std::cout << data2 << std::endl;

	//Restore default notation
	std::cout << std::fixed << data2 << std::endl;

	//Setting a desired precision and the current precision 
	std::streamsize prev_precision = std::cout.precision(); 
	std::cout << std::setprecision(3) << data2 << std::endl; 

	//Reset the precision
	std::cout.precision(prev_precision); //If previous position was unknown
	std::cout << std::defaultfloat << data2 << std::endl; //return to default flow 
	std::cout << std::setw(8) << std::setprecision(4) << data2 << std::endl;

	std::cout << std::showpos << data2 << "\t" << std::noshowpos << data1 << std::endl; //turn on and off show position

	return 0; 
}
