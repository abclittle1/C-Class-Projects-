#pragma once
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

//Definition of Class ComplexCartesian
class ComplexCartesian {
private:
	string m_name{};
	float m_real{};
	float m_imag{};
public:
	//Constructor with three arguments
	ComplexCartesian(std::string name, float real, float imag);
	//Constructor to instantiate an object with real and imaginary initialized to 1.0
	ComplexCartesian(std::string name);
	//Default Constructor
	ComplexCartesian() = default;
	//Accessor Member Functions
	std::string getName(); 
	float getReal();
	float getImag();

	void setName(std::string Name);
	void setReal(float real);
	void setImag(float imag);

	//A member function to compute the sum of two complex numbers
	ComplexCartesian Add(ComplexCartesian z);
	//A member function to determine which complex number has a larger phase angle
	bool HasLargerPhaseThan(ComplexCartesian z);
};

////Definition of Class ComplexPolar
//class ComplexPolar {
//private:
//	string m_name{};
//	float m_magnitude{};
//	float m_angle{};
////Implement constructors
//ComplexPolar(std::string name, float mag, float ang);
//ComplexPolar(std::string name);
//ComplexPolar() = default;
////Implement Accessor member functions
//std::string getName();
//float getMagnitude();
//float getAngle();
//
//void setName(std::string Name);
//void setMagnitude(float real);
//void setAngle(float imag);
////Implement a member function to implement multiplication of two complex numbers in polar form
//
////Implement a member function to determine which complex number has a larger magnitude
//
//};

