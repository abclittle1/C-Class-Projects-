//A Program to demonstrate delegating constructors: A Class with more than one custom constructors
#include "Complex.h"

int main()
{
	//Variables to store user entered real and imaginary parts of a complex number temporarily
	float real{}, imag{};

	std::cout << "Enter the real and imaginary parts separated by space of the complex number z1: ";
	std::cin >> real >> imag;
	//Instantiate the first complex cartesian number object
	ComplexCartesian z1("z1", real, imag);
	
	std::cout << "Enter the real and imaginary parts separated by space of the complex number z2: ";
	std::cin >> real >> imag;
	//Instantiate the second complex cartesian number object
	ComplexCartesian z2("z2", real, imag);
	
	//Instantiate a complex number initialzed with zeros to store the sum
	ComplexCartesian sum;
	
	//A variable to store user entered data temporarily
	float temp{};

	do {
		//Perform operations on the complex objects using switch and case statements
		unsigned int choice{};
		std::cout << "Enter \t1: Add Complex Numbers" << std::endl << "\t2: Display the complex numbers" << std::endl << "\t3: Change real part" << std::endl << "\t4: Change imaginary part" << std::endl <<"\t5: Compare Phase angles"<<std::endl<<"\t0: Quit" << std::endl;
		std::cin >> choice;
		if (choice == 0)
		{
			break;
		}
		switch (choice)
		{
		case 1:
			//Add the two complex numbers and display the result
			sum = z1.Add(z2);
			std::cout << "The sum of " << z1.getName() << ": " << z1.getReal() << std::showpos <<  z1.getImag() << "i" << std::noshowpos << " and " << z2.getName() << ": " << z2.getReal() << std::showpos  << z2.getImag() << "i" << std::noshowpos << " is " << sum.getReal() << std::showpos  << sum.getImag() << "i" << std::noshowpos << std::endl;
			break;
		case 2:
			//Display the two complex numbers
			std::cout << "The complex numbers are: " << z1.getName() << ":" << z1.getReal() << std::showpos << z1.getImag() << "i"
				<< std::noshowpos << " and " << z2.getName() << " :" << z2.getReal() << std::showpos << z2.getImag() << "i"
				<< std::noshowpos << std::endl;
			break;

		case 3:
			//Update the real parts of the two complex numbers
			//Updating the first complex number 
			std::cout << "Enter the new value for the real part of " << z1.getName() << ":";
			std::cin >> temp;
			z1.setReal(temp);

			//Updating the second complex number 
			std::cout << "Enter the new value for the real part of " << z2.getName() << ":";
			std::cin >> temp;
			z2.setReal(temp);

			//Displaying the updated values 
			std::cout << "The updated value for the complex numbers are: " << z1.getName() << ":" << z1.getReal() << std::showpos << z1.getImag() << "i"
				<< std::noshowpos << " and " << z2.getName() << " :" << z2.getReal() << std::showpos << z2.getImag() << "i"
				<< std::noshowpos << std::endl;
			break;

		case 4:
			//Update the imaginary parts of the two complex numbers
			//Updateing the first complex number 
			std::cout << "Enter the new value for the imaginary part of " << z1.getName() << ":";
			std::cin >> temp;
			z1.setImag(temp);

			//Updating the second complex number 
			std::cout << "Enter the new value for the imaginary part of " << z2.getName() << ":";
			std::cin >> temp;
			z2.setImag(temp);

			//Displaying the updated values 
			std::cout << "The updated value for the complex numbers are: " << z1.getName() << ":" << z1.getReal() << std::showpos << z1.getImag() << "i"
				<< std::noshowpos << " and " << z2.getName() << " :" << z2.getReal() << std::showpos << z2.getImag() << "i"
				<< std::noshowpos << std::endl;
			break;

		case 5:
			//Determine which complex number has the larger phase angle
			std::cout << "The complex number with the larger phase angle is: ";
			if (z1.HasLargerPhaseThan(z2))
				std::cout << z1.getName() << std::endl;
			else if (z2.HasLargerPhaseThan(z1))
				std::cout << z2.getName() << std::endl;
			else
				std::cout << "The phase angles of the two complex numbers are equal." << std::endl;
			break;
		default:
			std::cout << "Invalid selection" << std::endl;
		}
	} while (true);
	return 0;
}
