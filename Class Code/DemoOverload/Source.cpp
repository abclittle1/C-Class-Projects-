#include "DemoOverload.h"

int main()
{
	int data1{ 5 }, data2{ 6 }, result{};
	float fdata1{ 5.5 }, fdata2{ 6.5 }, fdata3{ -6.5 }, fresult{ 0.0 };

	std::cout << "Sum of " << data1 << " and " << data2 << " = " << Add(data1, data2) << std::endl;

	/*std::cout << "Sum of " << fdata1 << " and " << fdata2 << " = " << Add(fdata1, fdata2) << std::endl;*/

	std::cout << "Sum of " << fdata1 << " , " << fdata2 << " and " << fdata3 << " = " << Add(fdata1, fdata2, fdata3) << std::endl;

	std::cout << "Sum of " << data1 << " and " << fdata2 << " = " << Add(data1, fdata2) << std::endl; //Must match the signature. Will not work with float then int

	//Overloading by the passing technique 
	std::cout << "Sum of " << fdata1 << " and " << fdata2 << " = " << Add(&fdata1, &fdata2) << std::endl; //passing by address (using pointer)

	float* ptr1 = &fdata1; 
	std::cout << "Sum of " << fdata1 << " and " << fdata2 << " = " << Add(ptr1, &fdata2) << std::endl;

	std::cout << "Sum of " << fdata1 << " and " << fdata2 << " = " << Add(fdata1, &fdata2) << std::endl;
	

	int a1{ 10 }, b1{ -6 };
	int res = sub(a1, b1);
	std::cout << "Difference between " << a1 << " and " << b1 << " = " << res << std::endl;

	int m1{ 2 }, m2{ 3 };
	int pro = mul(m1, m2);

	// to overload use const keyword with reference
	const int m3{ 5 };
	pro = mul(m3, m2); 
	
	int d1{ 2 }, d2{ 3 };

	int q = divOwn(d1, d2);

	return 0;
}
