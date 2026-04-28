#pragma once
#include "Shape.h"

//Class Circle is derived from the class Shape
class Circle : public Shape{
private:
	float m_radius{};
public:
	Circle(std::string name, float radius);
	~Circle();
	void Area();
	void Display();
};
