//A program to show how to write a program
#include<iostream>

/*
A function to display a message about the capability of the program
*/

void DisplayMessage()
{
	std::cout << "The program will accept the x and y coordinates of two points" << std::endl;

	std::cout << " and compute the distance between the two points" << std::endl;

	std::cout << " and display the distance" << std::endl;

}

/*
A function to compute the distance between two points 
The function will accept x and y coordinates of two points 
and return the computed distance to the calling function
*/
float MeasureDistance(float x1, float y1, float x2, float y2)
{
	std::cout << "x1 = " << x1 << "Address of x1 = " << &x1 << std::endl;
	float length{}; //Automatic or local variable 
	length = sqrtf(powf((x1 - x2), 2.0f) + powf((y1 - y2), 2.0f));
	x1 = x1 + 5;
	return length;
}

/*A function to display the computed length
with the two points the user provided as the input data*/

void DisplayDistance(float x1, float y1, float x2, float y2, float length)
{
	std::cout << "The distance between the point(" << x1 << "," << y1 << ")" << " and the point (" << x2 << "," << y2 << ") is " << length;
}

int main()
{
	//Call the function DisplayMessage to inform the user of the program capability 

	DisplayMessage();

	float Point1_x{}, Point1_y{}, Point2_x{}, Point2_y{};

	std::cout << "Enter the x and y coordinates of the first point seperated by space: ";
	std::cin >> Point1_x >> Point1_y;

	std::cout << "Enter the x and y coordinates of the second point seperated by space: ";
	std::cin >> Point2_x >> Point2_y;

	float distance{};

	std::cout << "Point1_x = " << Point1_x << "Address of Point1_x = " << &Point1_x << std::endl;

	//Call the function ot compute the distance between two points 
	//pass the four arguments for the function 
	distance = MeasureDistance(Point1_x, Point1_y, Point2_x, Point2_y);
	//Call the function to display
	DisplayDistance(Point1_x, Point1_y, Point2_x, Point2_y, distance);

	return 0;
}

//float MeasureDistance(float x1, float y1, float x2, float y2)
//{
//	std::cout << "x1 = " << x1 << "Address of x1 = " << &x1 << std::endl;
//	float length{}; //Automatic or local variable 
//	length = sqrtf(powf((x1 - x2), 2.0f) + powf((y1 - y2), 2.0f));
//	x1 = x1 + 5;
//	return length;
//}
