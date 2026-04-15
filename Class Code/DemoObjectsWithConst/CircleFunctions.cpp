#include "Circle.h"

//Define the constructor of the Circle
//Using the scope resolution operator - ::

Circle::Circle(std::string name, float radius)
{
	this->m_name = name;
	this->m_radius = radius;
	this->m_area = { 0.0f };
	std::cout << "Instanitated Circle " << this->m_name << std::endl;
}

void Circle::Area()
{
	this->m_area = 3.1417f * powf(this->m_radius, 2.0f);
}

void Circle::Display()
{
	std::cout << "The circle is " << this->m_name << " has a radius of " << this->m_radius << " and the area is " << this->m_area << std::endl;
}

void Circle::Radius(float radius)
{
	this->m_radius = radius;
}
