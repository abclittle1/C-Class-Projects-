#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	//Maximum number of elements in the series the program can handle
	constexpr unsigned int MaxSize{ 10 };

	std::cout << "The program can compute the mean and the standard deviation\n of a series of real numbers with a maximum of " << MaxSize << " elements in the series." << std::endl<< std::endl;

	unsigned int NumberOfElements{}; //A variable to store the desired size from the user which should be  equal or less than the MaxSize.

	//Write code to prompt the user to enter the desired number of elements in the series and store the entered value in the appropriate data variable
	std::cout << "Enter the desired size of the series between 2 and 10: ";
	std::cin >> NumberOfElements;

	//Write code to check the validity of the user desired series and exit the program if not valid
	if ((NumberOfElements < 2) || (NumberOfElements > 10))
	{
		std::cout << "The entered value is invalid, exiting the program." << std::endl; //Tells user that program is ending
		return 0;
	}

	//Write a single statement to define a vector with the name Series initialized with zeros capable of storing MaxSize single precision real numbers
	unsigned int series[MaxSize];

	//Write code to prompt the user to enter the values of the desired number of elements of the series using an appropriate loop type
	unsigned int* pseries{ series };
	for (size_t i{}; i < NumberOfElements; i++)
	{
		std::cout << "Enter the value of the series[" << (i + 1) << "]: ";
		std::cin >> *pseries;
		pseries++;
	}

	std::cout << "\nThe Series is"<<'\t';
	//Write code to display the series using an appropriate loop type
	for (size_t i{}; i < NumberOfElements; i++)
	{
		std::cout << (i + 1)<<'\t';
	}


	std::cout << std::endl;
	float mean{}; //A variable to store the computed mean
	//Write code to compute the sum of the series using an appropriate loop
	float sum = {}; //Variable to store the sum
	for (size_t i{}; i < NumberOfElements; i++)
	{
		sum += series [i];
		
	}
	
	//Write code to compute the mean
	mean = sum / NumberOfElements;

	float std_dev{}; //A variable to store the computed standard deviation

	//Write code to compute the standard deviation of the series
	float sq_diff_sum{};
	for (size_t i{}; i < NumberOfElements; i++)
	{
		sq_diff_sum += (series[i] - mean) * (series[i] - mean); //stores the sum of (x_i-x_avg)^2 for the array
	}
	std_dev = sqrt(sq_diff_sum / NumberOfElements);


	//Code to display the mean and the standard deviation with a precision to four decimal places
	std::cout << "\nThe mean and the standard deviation of the series are " << std::setprecision(4) << mean << ", " << std_dev <<" respectively"<< std::endl;

	return 0;
}
