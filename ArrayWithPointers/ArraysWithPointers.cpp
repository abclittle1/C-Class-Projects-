#include <iostream>
#include <iomanip>

int main()
{
	constexpr unsigned int vectSize{ 5 };
	float vector[vectSize];

	float* pVector{ vector };

	//Prompt the user to input the values for the array 
	for (size_t i{}; i < std::size(vector); i++)
	{
		std::cout << "Enter the value of the vector[" << (i + 1) << "]: ";
		std::cin >> *pVector;
		pVector++; 
	}
	pVector = vector;

	for (size_t i{}; i < std::size(vector); i++)
	{
		std::cout << *pVector << '\t';
		pVector++;
	}
	pVector = vector;

	float* ptrLast{ &vector[vectSize - 1] };
	//Determine the address length of the vector 
	auto difference{ ptrLast - pVector }; 
	std::cout << "The address length is " << difference << std::endl;

	//Using array names as pointers 
	for (size_t i{}; i < std::size(vector); i++)
	{
		//Increment the values of each element in the array 
		*(vector + i) += 1.0f;
	}

	for (size_t i{}; i < std::size(vector); i++)
	{
		std::cout << *(vector + i) << "\t";
		/*std::cout << *vector << "\t";
		++vector;*/ //This cannot be done since it is a static array 
	}
	return 0;
}
