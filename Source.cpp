#include "DemoRef.h"

int main()
{
	float data{ 5.5f }; //floating point data variable
	
	//use a reference to refer to to the variable data
	float& rdata{ data };  //Pay attention to location of &

	std::cout << "Value of data is " << data << std::endl;
	std::cout << "Value of data using the reference is " << rdata << std::endl;
	//Advantage of referencing is 
	//1.) no need to reference and dereference
	rdata += 10.0f;
	std::cout << "Value of data is " << data << std::endl;

	float other_data{ 10.0f };
	rdata = other_data;
	std::cout << "The value of other_data is " << rdata << std::endl;
	std::cout << "The value of data is " << data << std::endl;

	data = -5.0f;
	other_data = 5.5f; 

	Swap(data, other_data);
	std::cout << "The value of other_data is " << other_data << std::endl;
	std::cout << "The value of data is " << data << std::endl;

	float values[]{ 1.0,2.0,3.0 };
	
	float ave = average(values);
	std::cout << "avergae = " << ave << std::endl;

	double_it(data);
	display(data);

	int data3{ 3 };
	/*data = data3;
	double_it(data3);*/
	display(data3); //no error because you are casting instead of changing

	return 0;
}