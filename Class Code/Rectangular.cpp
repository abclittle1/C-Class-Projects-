#include "Complex.h"

Cartesian::Cartesian(std::string name, float real, float imag) : m_name{name},m_real{real},m_imag{imag}
{
	std::cout << "Creating the complex number " << this->m_name << " in the Cartesian format" << std::endl;
}

//Accessor member function of the name
std::string Cartesian::getName() const
{
	return this->m_name;
}

//Accessor member function of the magnitude
float Cartesian::getReal() const
{
	return this->m_real;
}

//Accessor member function of the angle
float Cartesian::getImag() const
{
	return this->m_imag;
}

//Setter member function of the real part
void Cartesian::setReal(float real)
{
	this->m_real = real;
}

//Setter member function of the real part
void Cartesian::setImag(float imag)
{
	this->m_imag = imag;
}

//Operator + overloaded member function
Cartesian Cartesian::operator + (const Cartesian& z)
{
	Cartesian sum("sum", 0.0, 0.0);
	sum.m_real = this->m_real + z.m_real;
	sum.m_imag = this->m_imag + z.m_imag;
	return sum;
}

//Operator - overloaded member function
Cartesian Cartesian::operator - (const Cartesian& z)
{
	Cartesian difference("difference", 0.0, 0.0);
	difference.m_real = this->m_real + z.m_real;
	difference.m_imag = this->m_imag + z.m_imag;
	return difference;
}

//Conversion to Polar operator  overload
Cartesian::operator Polar()
{
	float pi{ 3.1417 };
	float mag = sqrtf(powf(this->m_real, 2.0f) + powf(this->m_imag, 2.0f));
	float angle = (atan2(this->m_imag, this->m_real)*180.0f/pi);
	Polar p(this->m_name, mag, angle);
	return p;
}

//Definition of the Overloaded operator << function
std::ostream& operator << (std::ostream& ostr, const Cartesian& z)
{
	ostr << "Cartesian Complex Number " << z.getName() << " = " << z.getReal() <<std::showpos << z.getImag()<<"i" << std::noshowpos<<std::endl;
	return ostr;
}

//Definition of the Overloaded operator >> function
std::istream& operator >> (std::istream& istr, Cartesian& z)
{
	float temp{};
	std::cout << "Enter the real part of the complex number " << z.getName() << ": ";
	istr >> temp;
	z.setReal(temp);
	std::cout << "Enter the imaginary part of the complex number " << z.getName() << ": ";
	istr >> temp;
	z.setImag(temp);
	return istr;
}






