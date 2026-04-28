#pragma once
#include <iostream>
#include <string>

class Shape {
private:
	size_t m_Sides{};
	std::string m_name{};
protected:
	float m_area{};
public:
	Shape(std::string name,size_t sides);
	Shape() = default; //No argument Constructor
	~Shape();
	void Area();
	void Display();
};