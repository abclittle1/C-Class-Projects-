#include "Circle.h"
#include "Rectangle.h"

int main()
{
	//Instantiate a Circle Object
	Circle MyCircle("MyCircle", 5.0f);
	//Declare a pointer of type shape
	//store the address of an object of type Circle in the pointer of type Shape
	Shape* pShape{ &MyCircle };


	//Call the area function using the pointer of type Shape.
	pShape->Area();
	//Cast manually the base class pointer to the derived class type.
	static_cast<Circle*> (pShape)->Area();
	

	//Instantiating a Rectangle Object
	Rectangle MyRect("MyRect", 2, 6.0f, 5.0f);

	//store the address of an object of type Rectangle in the pointer of type Shape
	
	//Call the area function using the pointer of type Shape.

	//Cast manually the base class pointer to the derived class type.
	
	return 0;
}
