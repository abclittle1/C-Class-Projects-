#include "Rectangle.h"

Rectangle::Rectangle(std::string name, size_t sides,float lv, float wv) : Shape(name,sides), m_length{ lv }, m_width{ wv }
{
	std::cout << "Constructing the Rectangle Object" << std::endl;
}

Rectangle::~Rectangle()
{
	std::cout << "Destroying the object ";
	Shape::Display();
}

//Overridden Function
void Rectangle::Display()
{
	Shape::Display();
	std::cout << "\t and the length and width is " << this->m_length <<" and "<<this->m_width<< std::endl;
}
//Overridden Function
void Rectangle::Area()
{
	this->m_area = this->m_length*this->m_width;
	this->Display();
	Shape::Area();
}