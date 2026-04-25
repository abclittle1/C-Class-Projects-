#include "Complex.h"

Polar::Polar(std::string name, float magnitude, float angle) : m_name{name},m_magnitude{magnitude},m_angle{angle}
{
	std::cout << "Creating the complex number " << this->m_name << " in the Polar format" << std::endl;
}

void Polar::set()
{
	std::cout << "Enter the magnitude of the complex number: " << this->m_name << ": ";
	std::cin >> this->m_magnitude;
	std::cout << "Enter the angle (deg) of the complex number: " << this->m_name << ": ";
	std::cin >> this->m_angle;
}

//Setter member function of the magnitude
void Polar::setMagnitude(float magnitude)
{
	this->m_magnitude = magnitude;
}
//Setter member function of the angle
void Polar::setAngle(float angle)
{
	this->m_angle = angle;
}

void Polar::Display()
{
	std::cout << "Complex Number " << this->m_name << " = " << this->m_magnitude << "<" << this->m_angle << std::endl;
}

//Accessor member function of the name
std::string Polar::getName() const
{
	return this->m_name;
}

//Accessor member function of the magnitude
float Polar::getMagnitude() const
{
	return this->m_magnitude;
}
//Accessor member function of the angle
float Polar::getAngle() const
{
	return this->m_angle;
}

//Overloaded operator < Member function to compare complex numbers

//Check whether the angle of a complex number is below a certian value


//Overloaded Operator * Member function to multiply two complex numbers
Polar Polar::operator * (const Polar& p)
{
	float pi{ 3.1417f };
	Polar Product("Product", 0.0f, 0.0f);
	Product.m_magnitude = this->m_magnitude * p.m_magnitude;
	Product.m_angle = (pi / 180.0f) * this->m_angle + (pi / 180.0f) * p.m_angle; //add in radians
	Product.m_angle *= (180.0f / pi); //convert back
	return Product;
}

//Operator Overloading using a friend function 
Polar operator*(const Polar& p1, const Polar& p2)
{
	float pi{ 3.1417f };
	Polar Product("Product", 0.0f, 0.0f);
	Product.m_magnitude = p1.m_magnitude * p2.m_magnitude;
	Product.m_angle = (pi / 180.0f) * p1.m_angle + (pi / 180.0f) * p2.m_angle; //add in radians
	Product.m_angle *= (180.0f / pi); //convert back
	return Product;
}

//Overloaded Operator / Member function to multiply two complex numbers
Polar Polar::operator / (const Polar& p)
{
	float pi{ 3.1417f };
	Polar Quotient("Quotient", 0.0f, 0.0f);
	Quotient.m_magnitude = this->m_magnitude / p.m_magnitude;
	Quotient.m_angle = (pi / 180.0f) * this->m_angle - (pi / 180.0f) * p.m_angle; //subtract in radians
	Quotient.m_angle *= (180.0f / pi); //convert back
	return Quotient;
}

//Operator Overloading using a friend function 
Polar operator/(const Polar& p1, const Polar& p2)
{
	float pi{ 3.1417f };
	Polar Quotient("Quotient", 0.0f, 0.0f);
	Quotient.m_magnitude = p1.m_magnitude / p2.m_magnitude;
	Quotient.m_angle = (pi / 180.0f) * p1.m_angle - (pi / 180.0f) * p2.m_angle; //subtract in radians
	Quotient.m_angle *= (180.0f / pi); //convert back
	return Quotient;
}

//Overloaded cartesian conversion operator
Polar::operator Cartesian()
{
	float pi{ 3.1417 };
	Cartesian z(this->m_name,
		(this->m_magnitude * cosf(this->m_angle * pi / 180.0f)), 
		(this->m_magnitude * sinf(this->m_angle * pi / 180.0f)));
	return z;
}

//Definition of the Overloaded operator << function
std::ostream& operator << (std::ostream& ostr, const Polar& p)
{
	ostr << "Polar Complex Number " <<p.getName()<<" = "<< p.getMagnitude() << "<" << p.getAngle() << std::endl;
	return ostr;
}

//Definition of the Overloaded operator >> function
std::istream& operator >> (std::istream& istr, Polar& p)
{
	float temp{};
	std::cout << "Enter the Magnitude of the complex number " << p.getName()<<": ";
	istr >> temp;
	p.setMagnitude(temp);
	std::cout << "Enter the Angle of the complex number " << p.getName()<<": ";
	istr >> temp;
	p.setAngle(temp);
	return istr;
}

