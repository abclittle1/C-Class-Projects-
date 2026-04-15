#include "Circle.h"

int main()
{
	//Instantiate an object of type Circle 
	Circle MyCircle; 
	//Call the function Display on the object MyCircle 
	MyCircle.Display();

	//Call the setradius member function on the object MyCircle
	MyCircle.SetRadius(12.0f);
	MyCircle.Display();

	MyCircle.Area();
	MyCircle.Display();

	Circle YourCircle;
	//Call the function Display on the object YourCircle 
	YourCircle.Display();

	return 0; 
}