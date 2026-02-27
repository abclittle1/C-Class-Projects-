/*The first task of the program is to promt the user to enser distance in three units (yards, feet, and inches) and output in inches*/

/*The second task is to promt the user to enter the distance in inches and out in yards, feet, and inches*/

/*The third task is to format the integer output*/

#include <iostream>
#include <iomanip>

int main()
{
	const unsigned feet_per_yard{ 3 }; //the conversion between units using constant unsigned integer variables 
	const unsigned inches_per_feet{ 12 }; //the conversion between units using constant unsigned integer variables

	//Zero intialized variable to store in the memory, the user entered yards, feet, and inches
	unsigned int yards{}, feet{}, inches{};

	//Task 1
	std::cout << "Enter a distance as yards, feet, and inches with the three values seperated by spaces: " << std::endl;  
	std::cin >> yards >> feet >> inches; 

	std::cout << "The entered distance is " << yards << " yards, " << feet << " feet, and " << inches << "inches." << std::endl;

	//Declare a variable at the time of use which is an unique feature of C++
	unsigned int distance_inches{};
	
	//Compute the distance in inches 
	distance_inches = inches + (feet * inches_per_feet) + (yards * feet_per_yard) * inches_per_feet; 

	//Task 2 use the distance in inches to display in yards, feet, and inches 
	//Will be part of assignment 
	std::cout << "The distance " << distance_inches << " corresponds to" << yards << " yards " << feet << "ft" << inches << "inch" << std::endl; 

	//Formatted integer display
	/* formatting is achieved using stream manipulator objects 
	and functions defined in iomanip and iostrean
	*/

	//Display an integer in a width of length 5 places 
	std::cout << std::setw(5) << yards << std::setw(8) << feet << std::endl;

	//Display integers in certain width and left justified 
	std::cout << std::left << std::setw(5) << yards << std::setw(8) << feet << std::endl;

	//Display inegers in certain width 
	std::cout << std::setw(5) << yards << std::setw(8) << feet << std::endl;

	//Display in hexadecimal format 
	std::cout << std::hex;
	std::cout << std::showbase;
	std::cout << std::setw(5) << yards << std::endl;

	//99% of all manipulator object it is persistent 
	//When you call a function, it is typically not persistant 

	//Display in octal format
	std::cout << std::oct;
	std::cout << std::showbase;
	std::cout << std::setw(5) << yards << std::endl;

	//Display in decimal format
	std::cout << std::dec;
	std::cout << std::showbase;
	std::cout << std::setw(5) << yards << std::endl;

	//Fill the empty spaces with a character
	std::cout << std::setfill('$') << std::right << std::setw(8) << yards << std::endl;





	return 0;
}
