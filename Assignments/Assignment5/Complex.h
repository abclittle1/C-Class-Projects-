#pragma once
#include <iostream>
#include <cmath>
#include <cstring>

//Definition of Class ComplexCartesian
class ComplexCartesian {
private:
	std::string m_name{};
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

