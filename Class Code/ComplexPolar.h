#pragma once
#include "Complex.h"
class Rect;	//dummy decloration
//Class definition of Polar Complex Number Type
class Polar {
private:
	std::string m_name{};
	float m_magnitude{};
	float m_angle{};
public:
	//Custom oveloaded constructor
	Polar(std::string name, float magnitude, float angle);
	//Destructor
	~Polar() { std::cout << "Destroying the Polar Complex Object " << this->m_name << std::endl; }
	void Display();
	void set();
	//Declare the global function ConvertToRect as a friend function
	friend Rect ConvertToRect(Polar& p);
};

//Prototype of the Global function to convert Polar Complex object to Rectangular Complex Object
Rect ConvertToRect(Polar& p);


