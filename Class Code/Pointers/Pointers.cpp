//A program to learn how to use pointers
#include<iostream>
#include <iomanip>

int main()
{
	int data{ 5 }, number{ 10 };

	//Define a pointer variable of type integer
	int* ptr{ nullptr };

	//Display the address of data and number
	std::cout << "Address of data is " << &data << std::endl;
	std::cout << "Address of number is " << &number << std::endl;

	//Reference the data variable using the pointer ptr
	ptr = &data;
	std::cout << "Address of data is " << ptr << std::endl;

	//Reference the number variable using the pointer ptr
	ptr = &number;
	std::cout << "Address of number is " << ptr << std::endl;

	//Display the contents of the number variable using the pointer 
	//Reference the data variable using the ptr
	std::cout << "Value of numer is " << *ptr << std::endl;

	int* ptrNum{ &number };

	int result{};
	int* ptrResult{ &result };
	ptr = &data;

	*ptrResult = *ptr + *ptrNum;
	std::cout << "Sum of data and number is " << *ptrResult << std::endl;
	std::cout << "Sum of data and number is " << *ptrResult << std::endl;

	std::cout << "Address of ptr is " << &ptr << std::endl;

	//Increment the contents of the variable number
	std::cout << "ptrNum = " << ptrNum << std::endl;
	*ptrNum++;
	std::cout << "ptrNum = " << ptrNum << std::endl;
	std::cout << "The value of number is " << number << std::endl;
	
	double tol{ 0.000001f };
	double* ptrTol{ &tol };
	std::cout << "ptrTol = " << ptrTol << std::endl;
	*ptrTol++;
	std::cout << "ptrTol = " << ptrTol << std::endl;

	//Size of pointer is not dependent on the type of variable, it is determined by the operating system of the computer 
	std::cout << "The memory size of data (integer) and ptr(int) is " << sizeof(data) << '\t' << sizeof(ptr) << std::endl;

	std::cout << "The memory size of tol (double) and ptrTol(double) is " << sizeof(tol) << '\t' << sizeof(ptrTol) << std::endl;
	return 0; 
}
