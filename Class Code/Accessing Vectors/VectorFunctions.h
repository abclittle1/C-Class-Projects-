#pragma once
#include <iostream>

void GetElements(float* ptr, const size_t length);
void DisplayElements(float* ptr, const size_t length);
//Compute the mean of a series
float mean(float* ptr, const size_t length);
//Compute the standard deviation of a series
float stddev(float* ptr, const float mean, const size_t length);
