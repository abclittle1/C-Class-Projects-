#include "Circle.h"

Circle::Circle(std::string name, float radius) : Shape(name,0),m_radius{ radius }
{
	std::cout << "Constructing Circle Object" << std::endl;
}

Circle::~Circle()
{
	std::cout << "Destroying the object ";
	Shape::Display();
}

//Overridden Function
void Circle::Display()
{
	Shape::Display();
	std::cout << "\t and the radius is " << this->m_radius << std::endl;
}
//Overridden Function
void Circle::Area()
{
	this->m_area = 3.147f * powf(this->m_radius, 2.0f);
	this->Display();
	Shape::Area();
}
