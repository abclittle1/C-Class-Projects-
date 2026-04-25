#include "ComplexRect.h"
#include "ComplexPolar.h"

Rect::Rect(std::string name, float real, float imag)
{
	this->m_name = name;
	this->m_real = real;
	this->m_imag = imag;
}

void Rect::set()
{
	std::cout << "Enter the real part of the complex number: " << this->m_name << ": ";
	std::cin >> this->m_real;
	std::cout << "Enter the imaginary part of the complex number: " << this->m_name << ": ";
	std::cin >> this->m_imag;
}

void Rect::Display()
{
	std::cout << "Complex Number " << this->m_name << " = " << this->m_real << std::showpos << this->m_imag << "i" << std::noshowpos<< std::endl;
}

//Definition of the global function to convert Rectangular Complex object to Polar Complex Object
Polar ConvertToPolar(Rect& t) //Where to implement code to convert
{
	float magitude = sqrtf(powf(t.m_real, 2.0f) + powf(t.m_imag, 2.0f));
	float angle = atan2(t.m_imag, t.m_real);
	angle = angle * (180.0f / 3.1417f);
	return Polar(t.m_name, magitude, angle);
}
