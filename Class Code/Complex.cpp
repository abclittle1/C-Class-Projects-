//A Program to demonstrate delegating constructors: A Class with more than one custom constructors
#include "Complex.h"

int main()
{
	//Variables to store user entered real and imaginary parts of a complex number temporarily
	float real{}, imag{};

	cout << "Enter the real and imaginary parts separated by space of the complex number z1: ";
	cin >> real >> imag;
	//Instantiate the first complex cartesian number object
	ComplexCartesian z1("z1", real, imag);

	cout << "Enter the real and imaginary parts separated by space of the complex number z2: ";
	cin >> real >> imag;
	//Instantiate the second complex cartesian number object
	ComplexCartesian z2("z2", real, imag);
	
	//Instantiate a complex number initialzed with zeros to store the sum
	ComplexCartesian sum; 

	//A variable to store user entered data temporarily
	float temp{};

	do {
		//Perform operations on the complex objects using switch and case statements
		unsigned int choice{};
		cout << "Enter \t1: Add Complex Numbers" << endl << "\t2: Display the complex numbers" << endl << "\t3: Change real part" << endl << "\t4: Change imaginary part" << endl <<"\t5: Compare Phase angles"<<endl<<"\t0: Quit" << endl;
		cin >> choice;
		if (choice == 0)
		{
			break;
		}
		switch (choice)
		{
		case 1:
			//Add the two complex numbers and display the result
			sum = z1.Add(z2);
			std::cout << "The sum of " << z1.getName() << ":" << z1.getReal() << std::showpos  << z1.getImag() << "i"
				<< std::noshowpos << " and " << z2.getName() << " :" << z2.getReal() << std::showpos << z2.getImag() << "i"
				<< std::noshowpos << " is " << sum.getReal() << std::showpos << "i" << sum.getImag() << std::noshowpos << std::endl;
			
			break;
		case 2:
			//Display the two complex numbers

			break;

		case 3:
			//Update the real parts of the two complex numbers

			break;

		case 4:
			//Update the imaginary parts of the two complex numbers
			break;

		case 5:
			//Determine which complex number has the larger phase angle
			break;
		default:
			cout << "Invalid selection" << endl;
		}
	} while (true);

	//Code for Complex number objects in polar form.

	return 0;
}