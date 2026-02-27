#include <iostream>
#include <cctype>

int main()
{
	char reply{}; //Store response to prompt for input 

	int count{}; //Store the number of temperatures that the user has entered
	float temperature{};
	float total_temperature{}; 

	do {
		std::cout << "Enter a temperature reading: ";
		std::cin >> temperature;
		total_temperature += temperature; 
		++count;

		std::cout << "Do you want to enter another temperature reading? (y/n): ";
		std::cin >> reply;

	}while(tolower(reply) == 'y');
	std::cout << "The average temperature is " << (total_temperature / count) << std::endl;

	return 0;
}
