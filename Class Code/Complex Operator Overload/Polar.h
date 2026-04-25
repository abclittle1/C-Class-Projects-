#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

//Operator overloading without friend functions, must have setter and getter functions 

//Class definition of Polar Complex Number Type
class Polar {
private:
	std::string m_name{};
	float m_magnitude{};
	float m_angle{};
public:
	//Custom oveloaded constructor
	Polar(std::string name, float magnitude, float angle);
	void Display();

	void set();
	//Setter member function of the magnitude
	void setMagnitude(float magnitude);
	//Setter member function of the angle
	void setAngle(float angle);

	//Accessor member function of the name
	std::string getName() const;
	//Accessor member function of the magnitude
	float getMagnitude() const;
	//Accessor member function of the angle
	float getAngle() const;

	//Declare a Overloaded operator Member function to compare complex numbers
	
	//Check whether the angle of a complex number is below a certian value
	

	//Member function to multiply two complex numbers
	

	//Conversion to Cartesian operator overloading
	//The return type is implicit to the type to be converted 
	//The number of arguments has to be zero 
	operator Cartesian(); 

	//Operator Overload of multiplication
	Polar operator * (const Polar& p);

	//Operator Overload of division
	Polar operator / (const Polar& p);

	//Friend function to overload the operator *
	friend Polar operator*(const Polar& p1, const Polar& p2);

	//Friend function to overload the operator /
	friend Polar operator/(const Polar& p1, const Polar& p2);
};

//Prototype of the Overloaded operator << function
std::ostream& operator << (std::ostream& ostr, const Polar& p);
//Prototype of the Overloaded operator >> function
std::istream& operator >> (std::istream& istr, Polar& p);

//Friend function to overload the operator *
Polar operator*(const Polar& p1, const Polar& p2);

//Friend function to overload the operator /
Polar operator/(const Polar& p1, const Polar& p2);
