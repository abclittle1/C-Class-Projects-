#pragma once
#include "Shape.h"

class Rectangle : public Shape {
private:
	float m_length{};
	float m_width{};
public:
	Rectangle(std::string name, float l, float w);
	void Area();
};
