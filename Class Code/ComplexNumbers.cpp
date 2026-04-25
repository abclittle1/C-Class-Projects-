#include "ComplexRect.h"
#include "ComplexPolar.h"

int main()
{
	//Instantiating the rectangular complex object
	Rect z1("z1", 3.0f, 4.0f);
	z1.Display();
	z1.set();
	z1.Display();

	//Instantiating the polar complex object
	Polar p1("p1", 5.0f, 36.13f);
	p1.Display();
	p1.set();
	p1.Display();

	//Converting the rectangular Complex into Polar complex
	Polar p = ConvertToPolar(z1);
	std::cout << "The polar form of z1 is ";
	p.Display();
	//Converting the Polar Complex to Rectangular Complex
	Rect z = ConvertToRect(p1);
	std::cout << "The rectangular form of p1 is ";
	z.Display();
	return 0;
}