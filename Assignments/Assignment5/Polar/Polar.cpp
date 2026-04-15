#include "Complex.h"


//Definition of the Constructor with three arguments using member initialization list
ComplexPolar::ComplexPolar(std::string name, float mag, float angle) :
	m_name{ name }, m_magnitude{ mag }, m_angle{ angle }
{
	//this->m_name = name; 
	std::cout << "Complex " << m_name << " Object Created" << std::endl;
}

//Definition of the Constructor with Singe argument and initializing the real and imaginary with 1.0
ComplexPolar::ComplexPolar(std::string name) : m_name{ name }, m_magnitude{ 1.0f }, m_angle{ 1.0f }
{
	std::cout << "Complex " << m_name << " Object Created" << "with real and imaginary values of 1.0" << std::endl;
}

//getter member functions
std::string ComplexPolar::getName()
{
	return m_name;
}

float ComplexPolar::getMagnitude()
{
	return m_magnitude;
}

float ComplexPolar::getAngle()
{
	return m_angle;
}

//setter member functions
void ComplexPolar::setName(std::string name)
{
	m_name = name;
}

void ComplexPolar::setMagnitude(float mag)
{
	m_magnitude = mag;
}

void ComplexPolar::setAngle(float angle)
{
	m_angle = angle;
}

//Member function to multiply two complex numbers
ComplexPolar ComplexPolar::Multiply(ComplexPolar z)
{
	//Instantiate a local complex cartesian object
	ComplexPolar temp;
	temp.m_magnitude = m_magnitude * z.m_magnitude;
	temp.m_angle = m_angle + z.m_angle;
	return temp;
}

//Member function to determine which complex number has the large magnidue
bool ComplexPolar::HasLargerMagnitudeThan(ComplexPolar z)
{
	//Calculate the phase angles of the two complex numbers
	float mag1 = m_magnitude;
	float mag2 = z.m_magnitude;

	if (mag1 > mag2)
	{
		return true;
	}
	return false;
}
