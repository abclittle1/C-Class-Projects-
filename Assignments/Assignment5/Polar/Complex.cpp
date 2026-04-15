//A Program to demonstrate delegating constructors: A Class with more than one custom constructors
#include "Complex.h"

int main()
{
	//Variables to store user entered magnitude and phase angle of a complex polar number temporarily
	float mag{}, angle{};
	std::cout << "Enter the magnitude and Phase Angle (Deg) separated by space of the complex number p1: ";
	std::cin >> mag >> angle;

	//Instantiate the first complex Polar number object
	ComplexPolar p1("p1", mag, angle);

	std::cout << "Enter the magnitude and Phase Angle (Deg) separated by space of the complex number p2: ";
	std::cin >> mag >> angle;

	//Instantiate the second complex polar number object
	ComplexPolar p2("p2", mag, angle);
	
	//Instantiate a complex polar number initialzed with zero magnitude and zero phase angle to store the product
	ComplexPolar product;

	//A variable to store user entered data temporarily
	float temp{};

	do {
		//Perform operations on the complex objects using switch and case statements
		unsigned int choice{};
		std::cout << "Enter \t1: Multiply Complex Polar Numbers" << std::endl << "\t2: Display the complex polar numbers" << std::endl << "\t3: Change Magnitude" << std::endl << "\t4: Change Phase Angle" << std::endl << "\t5: Compare Magnitudes" << std::endl << "\t0: Quit" << std::endl;
		std::cin >> choice;
		if (choice == 0)
		{
			break;
		}
		switch (choice)
		{
		case 1:
			//Multiply two complex polar numbers and display the result
			product = p1.Multiply(p2);
			std::cout << "The product of " << p1.getName() << ":" << p1.getMagnitude() << "<" <<
			p1.getAngle() << " and " << p2.getName() << ":" << p2.getMagnitude() << " < " << p2.getAngle() << " is:" << product.getName() <<
		    product.getMagnitude() << " <" << product.getAngle() << std::endl;
			break;
		case 2:
			//Display the two complex polar numbers
			std::cout << "The complex numbers are: " << p1.getName() << ":" << p1.getMagnitude() << " <" << p1.getAngle() << " and " << p2.getName() << ":" << p2.getMagnitude() << " < "
				<< p2.getAngle() << std::endl;
			break;

		case 3:
			//Update the magnitude of the two complex polar numbers
			//Updating the first complex number
			std::cout << "Enter the new value for the magnitude of " << p1.getName() << " : ";
			std::cin >> temp;
			p1.setMagnitude(temp);

			//Updating the second complex number
			std::cout << "Enter the new value for the magnitude of " << p2.getName() << " : ";
			std::cin >> temp;
			p2.setMagnitude(temp);

			//Displaying the updated complex numbers
			std::cout << "The new values for the complex numbers are: " << p1.getName() << ":" << p1.getMagnitude() << " <" << p1.getAngle() << " and " << p2.getName() << ":" << p2.getMagnitude()
				<< " <" << p2.getAngle() << std::endl;
			break;

		case 4:
			//Update the phase angle of the two complex polar numbers
			//Updating the first complex number
			std::cout << "Enter the new value for the angle of " << p1.getName() << " : ";
			std::cin >> temp;
			p1.setAngle(temp);

			//Updating the second complex number
			std::cout << "Enter the new value for the angle of " << p2.getName() << " : ";
			std::cin >> temp;
			p2.setAngle(temp);

			//Displaying the updated complex numbers
			std::cout << "The new values for the complex numbers are: " << p1.getName() << ":" << p1.getMagnitude() << " <" << p1.getAngle() << " and " << p2.getName() << ":" << p2.getMagnitude()
				<< " <" << p2.getAngle()  << std::endl;
			break;

		case 5:
			//Determine which complex number has the larger magnitude
			std::cout << "The complex number with the larger magnitude is: ";
			if (p1.HasLargerMagnitudeThan(p2))
				std::cout << p1.getName() << std::endl;
			else if (p2.HasLargerMagnitudeThan(p1))
				std::cout << p2.getName() << std::endl;
			else
				std::cout << "The magnitudes of the two complex numbers are equal" << std::endl;
			break;
		default:
			std::cout << "Invalid selection" << std::endl;
		}
	} while (true);

	return 0;
}
