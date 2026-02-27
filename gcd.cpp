#include <iostream>

int main()
{
	int number1{}, number2{};

	//number 1
	std::cout << "enter the first number: ";
	std::cin >> number1;

	//number 2
	std::cout << "enter the second number: ";
	std::cin >> number2;

	//initialization statement
	int GCD{ 1 };
	int divisor{ 2 };

	while ((divisor <= number1) && (divisor <= number2))
	{
		//Determine whether both numbers are even 
		//Modulus operator (%) return the remainder instead of the quotient 
		if ((number1 % divisor) == 0 && (number2 % divisor) == 0)
		{
			GCD = divisor;
		}
		//Incriment the sentinel divisor 
		++divisor; //Can also write divisor = divisor +1; or divisor++;
	}

	std::cout << "The GCD of " << number1 << " and " << number2 << " is " << GCD << std::endl;
	return (0);
}