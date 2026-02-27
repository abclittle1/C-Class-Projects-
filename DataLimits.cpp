#include <iostream>
#include <limits>

int main()
{
	/*Determine the maximum and minimum values that can be stored in the fundamental data types such as a character, int, unsigned int, float, and double*/

	//char data type
	std::cout << "Maximum value of type character is " << (int) std::numeric_limits<char>::max() << std::endl;
	std::cout << "Minimum value of type character is " << (int) std::numeric_limits<char>::min() << std::endl;
	std::cout << "The size of the character is " << sizeof(char) << "bytes" << std::endl;

	//signed int data type
	std::cout << "Maximum value of type int is " << std::numeric_limits<int>::max() << std::endl;
	std::cout << "Minimum value of type int is " << std::numeric_limits<int>::min() << std::endl;
	std::cout << "The size of the int is " << sizeof(int) << "bytes" << std::endl;

	int data1_max = { std::numeric_limits<int>::max() }; 
	int data1_min = { std::numeric_limits<int>::min() };

	std::cout << "Intrement of Maximum integer value is " << ++data1_max << std::endl; //Do not forget about wrap around
	std::cout << "Intrement of Minimum integer value is " << --data1_min << std::endl;

	//Single precision data type
	std::cout << "Maximum value of type float is " << std::numeric_limits<float>::max() << std::endl;
	std::cout << "Minimum value of type float is " << std::numeric_limits < float > ::min() << std::endl;
	std::cout << "The size of the float is " << sizeof(float) << "bytes" << std::endl;
	//Find max and min same as we did for int 

	//Double precision data type 
	std::cout << "Maximum value of type double is " << std::numeric_limits<double>::max() << std::endl;
	std::cout << "Minimum value of type double is " << std::numeric_limits < double > ::min() << std::endl;
	std::cout << "The size of the float is " << sizeof(double) << "bytes" << std::endl;
	//Find max and min same as we did for int

	//Find unsigned int as seen above 
	return 0;
}