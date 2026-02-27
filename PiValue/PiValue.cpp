#include <iostream>
#include <cstdlib> //header file to use pseudorandom number generator library 
#include <ctime> //header file to use the time library

int main()
{
	constexpr unsigned int MaxTrials = 1000000;
	unsigned int SucessCount{ 0 };

	//Seed the random number generator 
	//Old style casting of seeding a random number generator
	//srand((unsigned)time(nullptr))
	srand(static_cast<unsigned>(time(nullptr))); 

	unsigned int TrialCount{ 0 };
	double fx{}, fy{};

	while (TrialCount < MaxTrials) //runs below max trials. When it reaches max trials, it stops 
	{
		//generate the x direction
		fx = ((static_cast<double>(rand()) * 2.0f) / RAND_MAX) - 1.0f; //rand will only generate random integers
		//generate the y direction 
		fy = ((static_cast<double>(rand()) * 2.0f) / RAND_MAX) - 1.0f; //rand will only generate random integers

		if ((fx * fx + fy * fy) <= 1.0f)
		{
			SucessCount++;
		}
		
		TrialCount++; //ensures the loop is not infinite 
	}
	//DO NOT WRITE 
	//double pi = 4/0f * static_cast<double(SucessCount/MaxTrials);
	double pi = 4.0f * static_cast<double>(SucessCount) / MaxTrials;

	

	std::cout << "The value of pi is " << pi << std::endl;

	return 0;
}
