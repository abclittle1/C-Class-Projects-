#include "DynamicVector.h"

void FillVector(int *pVector,int nVectorSize)
{
	srand((unsigned) time(NULL)); //Random number generator 

	for (size_t i{}; i < nVectorSize; i++)
	{
		pVector[i] = rand(); //Storing random numbers in the generator 
	}
}

void DisplayVector(int *pVector,int nVectorSize)
{
	for (size_t i{}; i < nVectorSize; i++)
	{
		std::cout << pVector[i] << std::endl;
	}
}

void SortVector(int *pVector,int nVectorSize)
{
	//Local Pointer
	int* pNextValue{};
	for (size_t i{}; i < nVectorSize; i++)
	{
		pNextValue = &pVector[i] + 1; //The 1 represents the size of the data type 
		for (size_t j{ (i + 1) }; j < nVectorSize; j++)
		{
			if (pVector[i] < *pNextValue) //Comparing pNext with the value after 
			{
				int temp = pVector[i];
				pVector[i] = *pNextValue;
				*pNextValue = temp; 
			}
			pNextValue++; 
		}
	}
}
