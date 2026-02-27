//A Life Message Program (start every file with your full name)

//Provide relevant preprocessor directives
#include <iostream>
using namespace std;

namespace my_space
{
	int answer { 55 };
}
int main()		//a function header , or prototype identifying the function
{		//block of code expected to perform a well-defined operation 
		//Every opening curly bracket must be accompanoied by a closing curly bracket 


		int answer{ 42 };

		int answer2 = 42.5; // Assignment notation initalization approach 

		int answer3(42.5); // Function notation initialization approach 

		/*
		Braced Notation initlization approach. Braced initlizer operator ensures that the value between the braces is of the same type as the variable.
		Braced initializer uses narroew conversion approach to process converting a type to another type with more limited value range
		*/
		int answer4{ 55 }; 
	std::cout << "The answer to life, universe, and everything is 
		
		
		
		
		
		
		" <<
		answer << std::endl; 

		std::cout << "The answer to life, universe, and everythign is " << 
			my_space::answer << std::endl;

		std::cout << "The answer to life, universe, and everythign is " << 
			answer2 << std::endl;

		std::cout << "The answer to life, universe, and everythign is " <<
			answer3 << std::endl;

		int answer5{};
		std::cout << "Answer5 = " << answer5 << std::endl;

		int answer6{ 0L }; // Contant value of any kind is a literal

		//Defini9ng real data types 
		float applePrice{};
		std::cout << "The price of an apple is " << applePrice << std::endl;
		applePrice = 2.5;
		std::cout << "The price of an apple is " << applePrice << std::endl;

	return 0;

}
