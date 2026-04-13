#include "VectorFunctions.h"
void GetElements(float* ptr, const size_t length)
{
	std::cout << "Enter the elements of the series" << std::endl;
	for (size_t i{}; i < length; i++)
	{
		std::cout << "Series [" << (i + 1) << "] = ";
		std::cin >> *ptr;
		ptr++;
	}
}
void DisplayElements(float* ptr, const size_t length)
{
	std::cout << "The series is\t";
	for (size_t i{}; i < length; i++)
	{
		std::cout << *ptr << "\t";
		ptr++;
	}
}
//Compute the mean of a series
float mean(float* ptr, const size_t length)
{
	float avg{};
	for (size_t i{}; i < length; i++)
	{
		avg += *ptr;
		ptr++;
	}
	avg /= static_cast<float>(length);
	return avg;
}
//Compute the standard deviation of a series
float stddev(float* ptr, const float mean, const size_t length)
{
	float temp{};
	for (size_t i{}; i < length; i++)
	{
		temp += powf((mean - *ptr), 2.0f);
		ptr++;
	}
	temp = sqrtf(temp / static_cast<float>(length));
	return temp;
}