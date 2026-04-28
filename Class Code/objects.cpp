#include "Circle.h"
#include "Rectangle.h"

int main()
{
	//Instantiate a Circle Object
	Circle MyCircle("MyCircle", 5.0f);
	MyCircle.Area();
	MyCircle.Display();

	//Overwriting only works with inheritance
	


	//Instantiating a Rectangle Object
	Rectangle MyRect("MyRect", 2, 6.0f, 5.0f);
	MyRect.Area();


	return 0;
}