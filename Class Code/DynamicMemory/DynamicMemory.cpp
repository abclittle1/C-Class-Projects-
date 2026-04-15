#include <iostream>

int main()
{
	float* pvalue{ nullptr };
	std::cout << "The pointer is pointing to " << pvalue << std::endl;

	/*Allocate memory to store a single precision floating value using dynamic memory allocation. 
	Use the operator new to allocate memory dynamically. */
	pvalue = new float;

	std::cout << "The pointer is pointing to " << pvalue << std::endl;

	*pvalue = 5.5f;

	std::cout << "The pointer is pointing to " << pvalue << "and when the value stored is " << *pvalue << std::endl;

	//float* pvalue1 = { pvalue };
	float* pvalue1 = new float;
	//pvalue1 = pvalue;
	std::cout << "The pointer is pointing to " << pvalue1 << " and the value stored is " << *pvalue1 << std::endl;

	std::cout << "The pointer is pointing to " << pvalue1 << "and when the value stored is " << *pvalue1 << std::endl;
	//Deallocate the memory 
	delete pvalue;
	pvalue = { nullptr };
	delete pvalue1;
	pvalue1 = { nullptr };

	std::cout << "The pointer is pointing to " << pvalue << "and " << pvalue1 << std::endl;

	if (pvalue == nullptr) // it is defined within the if function, will still be defined after 
	{
		pvalue = new float; 
	}

	delete pvalue;
	pvalue = { nullptr }; 

	//if (pvalue == nullptr) //local scope
	//{
	//	float* ptr = new float;  
	// //Do Computation
	// //delete pvalue //must be deleted here or there will be big problems 
	//}

	if (pvalue == nullptr)
	{
		float* ptr = new float;
		pvalue = ptr; //allowed because it goes directly to the value 
	}
	delete pvalue; 

	//Allocating a consecutive memory location to store a vector 
	float* vector{ nullptr };

	size_t v_size{0};
	std::cout << "Enter the size of the vector to be created: ";
	std::cin >> v_size;

	vector = new float[v_size]; //consecutive memory locations 
	std::cout << "Enter the values of the vector" << std::endl;
	for (size_t i{}; i < v_size; i++)
	{
		std::cout << "Vector [" << (i + 1) << "] = ";
		std::cin >> vector[i];
	}

	for (size_t i{}; i < v_size; i++)
	{
		std::cout << vector[i] << std::endl;		
	}

	for (size_t i{}; i < v_size; i++)
	{
		*vector = *vector + 1;
		vector++;
	}

	//Release the vector memory 
	delete [] vector; //Release the whole block 

	return 0;
}
