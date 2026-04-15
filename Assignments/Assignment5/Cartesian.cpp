#include "Complex.h"

//Definition of the Constructor with three arguments using member initialization list
ComplexCartesian::ComplexCartesian(std::string name,
	float real,
	float imag) : m_name{name},m_real{real},m_imag{imag}
{
	//this->m_name = name;
	std::cout << "Complex " << m_name << " Object Created" << std::endl;
}

//Definition of the Constructor with Singe argument and initializing the real and imaginary with 1.0
ComplexCartesian::ComplexCartesian(std::string name) : m_name{ name }, m_real{ 1.0f }, m_imag{ 1.0f }
{
	std::cout << "Complex " << m_name << " Object Created" << "with real and imaginary values of 1.0"<< std::endl;
}

//getter member functions
std::string ComplexCartesian::getName()
{
	return m_name;
}

float ComplexCartesian::getReal()
{
	return m_real;
}

float ComplexCartesian::getImag()
{
	return m_imag;
}

//setter member functions
void ComplexCartesian::setName(std::string name)
{
	m_name = name;
}

void ComplexCartesian::setReal(float real)
{
	m_real = real;
}

void ComplexCartesian::setImag(float imag)
{
	m_imag = imag;
}

//Member function to add two complex numbers
ComplexCartesian ComplexCartesian::Add(ComplexCartesian z)
{
	//Instantiate a local complex cartesian object
	ComplexCartesian temp;
	temp.m_real = this->m_real + z.m_real;
	temp.m_imag = this->m_imag + z.m_imag;
	return temp;
}
//Member function to determine which complex number has the large phase angle
bool ComplexCartesian::HasLargerPhaseThan(ComplexCartesian z)
{
	//Calculate the phase angles of the two complex numbers
	float angle1 = std::atan2(m_imag, m_real);
	float angle2 = std::atan2(z.m_imag, z.m_real);
	if (angle1 > angle2)
	{
		return true;
	}
	return false;
}


