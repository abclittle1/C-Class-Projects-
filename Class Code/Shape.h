#pragma once
#include <iostream>
#include <string>

class Shape {
private:
	std::string m_name{};
protected:
	float m_area{};
//Constructor must be public to create subobjects
public:
	Shape(std::string name);
	Shape() = default; //No argument Constructor
	std::string getName();
	float getArea();
};
