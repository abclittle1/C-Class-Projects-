#include "Circle.h"

Circle::Circle(std::string name, float radius) : Shape{name},m_radius{radius} //Shape, delfault, copy, reference (copy using reference technique)
{
	std::cout << "Constructing Circle Object" << std::endl;
}

void Circle::Area()
{
	this->m_area = 3.1417f * powf(this->m_radius, 2.0f);
}


