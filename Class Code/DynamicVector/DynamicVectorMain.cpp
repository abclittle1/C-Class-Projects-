
#include "DynamicVector.h"


int main()
{
	int* VectorA{nullptr}; //Pointer to store the vector size
	int nSize{}; //Store size of vector 

	while(1) //Infinite Loop 
	{
		std::cout<<"Enter the desired size of the vector or a negative number to exit: ";
		std::cin>>nSize;
		if (VectorA != nullptr)
		{
			delete[] VectorA; //Release the memory to prevent a memory dump
			VectorA = nullptr;
		}

		if(nSize >= 0)
		{
			VectorA = new int[nSize];
			FillVector(VectorA, nSize);
			DisplayVector(VectorA, nSize);
			SortVector(VectorA, nSize);
			std::cout << "Sorted in a decending order" << std::endl;
			DisplayVector(VectorA, nSize);
		}
		else
		{
			break;//Premature break of the loop 
		}
	}
	return 0;
}
