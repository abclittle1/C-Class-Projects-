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
// // 
//Overridden Function


//Overridden Function
void Rectangle::Area()
{
	this->m_area = m_length * m_width;
	this->Display();
	this->Shape::Area();
}

//Overridden Function
void Rectangle::Display()
{
	this->Shape::Display();
	std::cout << "\t and the length and width are " << this->m_length <<" and " <<m_width << std::endl;
}