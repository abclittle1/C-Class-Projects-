#include "Circle.h"

int main()
{
	std::string name1{ "FirstCircle" };
	std::string name2{ "SecondCircle" };

	float radius1{ 5.0f }, radius2{ 8.0f };

	//Instantiate the first circle object
	Circle FirstCircle(name1,radius1);
	FirstCircle.Display();

	Circle SecondCircle(name2, radius2);
	SecondCircle.Display();

	Circle ThirdCircle;
	ThirdCircle.Display();

	return 0;
}
