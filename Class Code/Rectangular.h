#pragma once
#include "Complex.h"

//Class definition of Complex Rectangular
class Cartesian {
private:
	std::string m_name{};
	float m_real{};
	float m_imag{};

public:
	Cartesian(std::string name, float real, float imag);

	//Accessor member function of the name
	std::string getName() const;
	//Accessor member function of the magnitude
	float getReal() const;
	//Accessor member function of the angle
	float getImag() const;
	//Setter Member function of the real part
	void setReal(float real);
	//Setter Member function of the imaginary part
	void setImag(float imag);

	//Member function to add two complex numbers
	
	//Conversion to Polar operator  overload
	operator Polar();

	//Operator Overload of addition 
	Cartesian operator + (const Cartesian& z);

	//Operator Overload of subtraction
	Cartesian operator - (const Cartesian& z);

};

//Prototype of the Overloaded operator << function
std::ostream& operator << (std::ostream& ostr, const Cartesian& z);
//Prototype of the Overloaded operator >> function
std::istream& operator >> (std::istream& istr, Cartesian& z);


