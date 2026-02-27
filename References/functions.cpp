#include "DemoRef.h"

void Swap(float& data1, float& data2)
{
	float temp{};
	temp = data1;
	data1 = data2;
	data2 = temp;

}

float average(const float (& array)[3]) //(& array) tells the header that it is a reference 
{
	float mean{};
	for (std::size_t i{}; i < 3; i++)
	{
		mean += array[i];
	}
	mean /= 3.0f;
	return mean;
}

void double_it(float& it)
{
	it *= 2;
}


void display(const float& it)
{
	std::cout << "it = " << it << std::endl;
}
