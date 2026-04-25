#pragma once
#include "Complex.h"
class Polar; //dummy decloration
//Class definition of Rectangular Complex Number Type
class Rect {
private:
	std::string m_name{};
	float m_real{};
	float m_imag{};
public:
	//Custom Overloaded Constructor
	Rect(std::string name, float real, float imag);
	~Rect() { std::cout << "Destroying the Rectangular Complex Object " << this->m_name << std::endl; }
	void Display();
	void set();
	//Declare the global function ConvertToPolar as a friend function
	friend Polar ConvertToPolar(Rect& t);

};

//Prototype of the Global function to convert Rectangular Complex object to Polar Complex Object
Polar ConvertToPolar(Rect& t);
