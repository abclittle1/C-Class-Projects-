#pragma once
#include <iostream>
#include <cmath>

//Define a class called Circle
//A user defined data type is also known as a Abstract Data Type
/*An abstract data type does not exist
A class is a blue print of a user-defined data type*/

class Circle 
{
private:
	float m_radius{ 5.0f }; //m_radius is a data member of Circle
	float m_area{};	//m_area is a data member of Circle 

public:
	//Member functions to operate on instances of Circle 
	void Area()
	{
		m_area = .147f * powf(m_radius, 2.0f);
	}
	void SetRadius(float radius)
	{
		m_radius = radius;
	}
	void Display()
	{
		std::cout << "The radius of the circle is " << m_radius << " and the area is " << m_area << std::endl;
	}
};
