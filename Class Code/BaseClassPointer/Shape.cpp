#include "Shape.h"

Shape::Shape(std::string name, size_t sides) : m_name{ name },m_Sides{sides}
{
	std::cout << "Constructing Shape Object" << std::endl;
}
Shape::~Shape()
{
	std::cout << "Destroying the Shape subobject of: " << this->m_name << std::endl;
}

void Shape::Area()
{
	std::cout << "\tthe Area is " << m_area << std::endl;
}

void Shape::Display()
{
	std::cout << "The shape is " << m_name << " with " << m_Sides <<" sides"<< std::endl;
}
