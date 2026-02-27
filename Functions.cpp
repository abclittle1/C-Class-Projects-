#include "SwappingVariables.h"

void SwapVariables(float data1, float data2)
{
	float temp{};
	std::cout << "data1 = " << data1 << "\tdata2 = " << data2 << std::endl;
	temp = data1;
	data1 = data2;
	data2 = temp;
	std::cout << "data1 = " << data1 << "\tdata2 = " << data2 << std::endl;
}


void SwapVariablesVer2(float* data1, float* data2)
{
	float temp{};
	std::cout << "data1 = " << data1 << "\tdata2 = " << data2 << std::endl;
	temp = *data1;
	*data1 = *data2;
	*data2 = temp;
	std::cout << "data1 = " << data1 << "\tdata2 = " << data2 << std::endl;
}