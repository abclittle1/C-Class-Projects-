#pragma once
#include <iostream>
#include <cmath>
#include <string>
#include <type_traits>

//Definition of Class Circle 

class Circle 
{
private:
	float m_radius;
	float m_area;
	std::string m_name;

public:
	//Custom Constructor to initiate a Circle object
	Circle(std::string name, float radius);
	//Circle() {};//Old Style Default Constructor Overloading
	Circle() = default; //Current standard approach 
	void Area(); //Prototype of the member function Area 
	void Display();
	void Radius(float Radius);
};
