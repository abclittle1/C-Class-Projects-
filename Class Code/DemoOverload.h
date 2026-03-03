#pragma once
#include <iostream>

int Add(int value1, int value2);

float Add(int value1, float value2);

float Add(float value1, int value2);

//Adding two float
float Add(float value1, float value2);

//Adding three values 
float Add(float value1, float value2, float value3);

//Pass by address
float Add(float* ptr1, float* ptr2);

//Pass by reference 
float Add(float& value1, float& value2);

//One is pass by reference one is pass by value
//float Add(float& value1, float value2); //must use pointer
float Add(float& value1, float* value2);

//Overloading and const keyword parameters

int sub(const int a,const int b);

int sub(const int a, const int b);

int mul(int& a, int& b);
int mul(const int& a, const int& b);

//int divOwn(int* a, int* b);
//int divOwn(const int* a, const int* b);

int divOwn(int* a, int* b);
int divOwn(int* const a, int* const b);