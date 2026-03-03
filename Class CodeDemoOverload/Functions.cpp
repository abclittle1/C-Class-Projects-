#include "DemoOverload.h"

int Add(int value1, int value2)
{
	int temp = value1 + value2;
	return temp;
}
float Add(int value1, float value2)
{
	float temp = value1 + value2;
	return temp;
}
float Add(float value1, int value2)
{
	float temp = value1 + value2;
	return temp;
}
float Add(float value1, float value2)
{
	float temp = value1 + value2;
	return temp;
}
float Add(float value1, float value2, float value3)
{
	float temp = Add(&value1, &value2);
	return Add(&temp, &value3);
}

float Add(float* ptr1, float* ptr2)
{
	(*ptr1)++;
	float temp = *ptr1 + *ptr2;
	return temp; 
}

float Add(float& value1, float& value2)
{
	value1++;
	float temp = value1 + value2;
	return temp;
}

float Add(float& value1, float* value2)
{
	float temp = value1 + *value2;
	return temp; 
}

int sub(int a,int b)
{
	int temp = b - a;
	b++;
	return temp;
}

//Compiler sees no difference in this function with the above function
//int sub(const int a,const int b)
//{
//	int temp = b - a;
//	//b++;
//	return temp;
//}

int mul(int& a, int& b)
{
	int temp = a * b;
	return temp;
}

int mul(const int& a, const int& b)
{
	int temp = a * b;
	return temp;
}

int divOwn(int* a, int* b)
{
	int temp = *b / *a;
	return temp;
}

int divOwn(int* const a,int* const b)
{
	int temp = *b / *a;
	return temp;
}
