#include "ComplexPolar.h"
#include "ComplexRect.h"

Polar::Polar(std::string name, float magnitude, float angle)
{
	this->m_name = name;
	this->m_magnitude = magnitude;
	this->m_angle = angle;
}

void Polar::set()
{
	std::cout << "Enter the magnitude of the complex number: " << this->m_name << ": ";
	std::cin >> this->m_magnitude;
	std::cout << "Enter the angle (deg) of the complex number: " << this->m_name << ": ";
	std::cin >> this->m_angle;
}

void Polar::Display()
{
	std::cout << "Complex Number " << this->m_name << " = " << this->m_magnitude <<"<"<< this->m_angle << std::endl;
}

//Definition of the global function to convert Polar Complex object to Rectangular Complex Object
Rect ConvertToRect(Polar& p)
{
	float temp{ 3.1417f / 180.0f };
	float real = p.m_magnitude * cosf(temp * p.m_angle);
	float imag = p.m_magnitude * sinf(temp * p.m_angle);
	return Rect(p.m_name, real, imag);
}
