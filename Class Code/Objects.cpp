#include "Circle.h"
#include "Rectangle.h"

int main()
{
	//Instantiate a Circle Object
	Circle MyCircle("MyCircle", 5.0f);
	MyCircle.Area();
	std::cout << "Circle Area = " << MyCircle.getArea() << std::endl;
	std::cout << "Area of Circle " << MyCircle.getName() << " " << MyCircle.getArea() << std::endl;

	//Instantiating a Rectangle Object
	Rectangle MyRectangle("MyRectange", 2.0f, 3.0f);
	MyRectangle.Area();
	std::cout << "Rectangle Area = " << MyRectangle.getArea() << std::endl;
	std::cout << "Area of Rectangle " << MyRectangle.getName() << " " << MyRectangle.getArea() << std::endl;

	Shape MyShape("test");
	MyShape.getName();
	MyShape.getArea();

	return 0;
}