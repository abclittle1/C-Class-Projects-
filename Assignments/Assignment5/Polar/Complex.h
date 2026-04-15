#pragma once
#include <iostream>
#include <cmath>
#include <cstring>

//Definition of Class ComplexPolar
class ComplexPolar {
private:
	std::string m_name{};
	float m_magnitude{};
	float m_angle{};
public:
	//Implement constructors
	//Three Argument Constructor 
	ComplexPolar(std::string name, float mag, float angle);
	//Constructor to instantiate an object with real and imaginary initialized to 1.0
	ComplexPolar(std::string name);
	//Default Constructor
	ComplexPolar() = default;
	//Implement Accessor member functions
	std::string getName();
	float getMagnitude();
	float getAngle();

	void setName(std::string Name);
	void setMagnitude(float mag);
	void setAngle(float angle);
	//Implement a member function to implement multiplication of two complex numbers in polar form
	ComplexPolar Multiply(ComplexPolar z);
	//Implement a member function to determine which complex number has a larger magnitude
	bool HasLargerMagnitudeThan(ComplexPolar z);
	};

