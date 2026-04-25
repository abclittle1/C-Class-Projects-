#include "Complex.h"

int main()
{
	////Commenting out previous code so that it is easier to see the different cases of operations

	////Instantiating the polar complex object
	//Polar p1("p1", 5.0f, 36.13f),
	//	p2("p2", 4.0f, 45.0f);
	////Displaying p1 and p2
	//std::cout << p1;
	//std::cout << p2;

	//Cartesian z1 = p1;
	//std::cout << z1;

	//p2 = z1;
	//std::cout << p2;*/

	//Cartesian z3("z3", -1.0, 5.0);
	//std::cout << z3;
	//std::cout << z3.operator Polar();

	////Multiply two polar objects
	//Polar prod = p1 * p2;
	//std::cout << prod;

	//Cartesian z1("z1", 4.0, 2.0);
	//Cartesian z2("z2", 5.0, 1.0);

	////Add two cartesian objects
	//Cartesian sum = z1 + z2;
	//std::cout << z1;
	//std::cout << z2;
	//std::cout << sum;

	//Polar prod2 = z1 * z2;

	////Multiply two cartesian complex objecrs 
	//Polar prod2 = static_cast<Polar>(z1) * static_cast<Polar>(z2);
	//std::cout << prod2;

	//Showing the cases of multiplication, division, addition, and subtraction 

	//Instantiating two polar numbers 
	Polar p1("p1", 5.0f, 36.13f),
		p2("p2", 4.0f, 45.0f);
	//Displaying p1 and p2
	std::cout << p1;
	std::cout << p2;

	//Instantiating Two Rectangular Numbers 
	Cartesian z1("z1", 5.0, 4.0),
		z2("z2", 4.0, 2.0);
	//Displaying z1 and z2
	std::cout << z1;
	std::cout << z2;

	// Two Polar Numbers
	//Addition
	Cartesian sum1 = static_cast<Cartesian>(p1) + static_cast<Cartesian>(p2);
	std::cout << "The sum of " << p1 << " and " << p2 << " is " << static_cast<Polar>(sum1) << std::endl;
	//Subtraction
	Cartesian difference1 = static_cast<Cartesian>(p1) - static_cast<Cartesian>(p2);
	std::cout << "The difference of " << p1 << " and " << p2 << " is " << static_cast<Polar>(difference1) << std::endl;
	//Multiplication
	Polar product1 = p1 * p2;
	std::cout << "The product of " << p1 << " and " << p2 << " is " << product1 << std::endl;
	//Division
	Polar quotient1 = p1 / p2;
	std::cout << "The quotient of " << p1 << " and " << p2 << " is " << quotient1 << std::endl;

	// Two Cartesian Numbers 
	//Addition
	Cartesian sum2 = z1 + z2;
	std::cout << "The sum of " << z1 << " and " << z2 << " is " << sum2 << std::endl;
	//Subtraction
	Cartesian difference2 = z1 - z2;
	std::cout << "The difference of " << z1 << " and " << z2 << " is " << difference2 << std::endl;
	//Multiplication 
	Polar product2 = static_cast<Polar>(z1) * static_cast<Polar>(z2);
	std::cout << "The product of " << z1 << " and " << z2 << " is " << static_cast<Cartesian>(product2) << std::endl;
	//Division
	Polar quotient2 = static_cast<Polar>(z1) / static_cast<Polar>(z2);
	std::cout << "The quotient of " << z1 << " and " << z2 << " is " << static_cast<Cartesian>(quotient2) << std::endl;
	
	// One Polar and One Cartesian Number  
	//Additon
	Cartesian sum3 = z1 + static_cast<Cartesian>(p1);
	//Sum displayed in Cartesian
	std::cout << "The sum of " << z1 << " and " << p1 << " displayed in Cartesian is " << sum3 << std::endl;
	//Sum displayed in Polar 
	std::cout << "The sum of " << z1 << " and " << p1 << " displayed in Polar is " << static_cast<Polar>(sum3) << std::endl;

	//Subtraction
	Cartesian difference3 = z1 - static_cast<Cartesian>(p1);
	//Difference displayed in Cartesian
	std::cout << "The diffence of " << z1 << " and " << p1 << " displayed in Cartesian is " << difference3 << std::endl;
	//Sum displayed in Polar 
	std::cout << "The sum of " << z1 << " and " << p1 << " displayed in Polar is " << static_cast<Polar>(difference3) << std::endl;

	//Multiplication
	Polar product3 = static_cast<Polar>(z1) * p1;
	//Product displayed in Cartesian
	std::cout << "The product of " << z1 << " and " << p1 << " displayed in Cartesian is " << static_cast<Cartesian>(product3) << std::endl;
	//Sum displayed in Polar 
	std::cout << "The product of " << z1 << " and " << p1 << " displayed in Polar is " << product3 << std::endl;

	//Division
	Polar quotient3 = static_cast<Polar>(z1) / p1;
	//Product displayed in Cartesian
	std::cout << "The quotient of " << z1 << " and " << p1 << " displayed in Cartesian is " << static_cast<Cartesian>(quotient3) << std::endl;
	//Sum displayed in Polar 
	std::cout << "The quotient of " << z1 << " and " << p1 << " displayed in Polar is " << quotient3 << std::endl;

	//Converting between polar and cartesian
	//Cartesian to Polar
	Cartesian z1 = p1;
	std::cout << z1;

	//Polar to Cartesian
	Polar p2 = z2;
	std::cout << p2;

	return 0;
}
