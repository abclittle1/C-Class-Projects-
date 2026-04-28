#include "Rectangle.h"


Rectangle::Rectangle(std::string name, float l, float w):Shape{name},m_length{l},m_width{w}
{
	std::cout << "Constructing the Rectangle Object" << std::endl;
}

void Rectangle::Area()
{
	this->m_area = this->m_length * this->m_width;
}
