#include "Measured_Distance_Version2.h"

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
}