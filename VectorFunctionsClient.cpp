#include "VectorFunctions.h"

int main()
{
	constexpr unsigned int MaxSize{ 100 };
	unsigned int Size{};
	float Series[MaxSize]{};

	std::cout << "The program can compute the mean and standard deviation of a series of " << MaxSize << " elements " << std::endl;

	std::cout << "enter the desired size of a series: ";
	std::cin >> Size;

	GetElements(Series, Size); //Passing the address of the first element of the array
	DisplayElements(Series, Size);

	float Average = mean(Series, Size);
	float std_dev = stddev(Series, Average, Size);

	std::cout << "Mean = " << Average << "\t Standard Deviation = " << std_dev << std::endl;

	return 0;
}