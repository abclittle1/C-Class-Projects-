#pragma once
#include "Shape.h"

class Rectangle : public Shape {
private:
	float m_length{};
	float m_width{};
public:
	Rectangle(std::string name, size_t sides,float lv, float wv);
	~Rectangle();
	void Display();
	void Area();
};
