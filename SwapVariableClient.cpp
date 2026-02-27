#include "SwappingVariables.h"

int main()
{
	//Version 1
	float num1{ 5 }, num2{ 6 };
	std::cout << "num1 = " << num1 << "\tnum2 = " << num2 << std::endl;
	SwapVariables(num1, num2);
	std::cout << "num1 = " << num1 << "\tnum2 = " << num2 << std::endl;


	//Version 2
	float* ptr1{ &num1 }, * ptr2{ &num2 };
	std::cout << "Address of num1 = " << ptr1 << "\tAddress of num2 = " << ptr2 << std::endl;
	SwapVariablesVer2(ptr1, ptr2);
	std::cout << "num1 = " << num1 << "\tnum2 = " << num2 << std::endl;
	return 0;
}