#include "Shape.h"

Shape::Shape(std::string name) : m_name{name}
{
	std::cout << "Constructing Shape Object" << this->m_name << std::endl;
}

std::string Shape::getName()
{
	return this->m_name;
}

float Shape::getArea()
{
	return this->m_area;
}
