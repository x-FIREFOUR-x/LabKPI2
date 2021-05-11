#pragma once
#include <vector>
#include <string>

class Exercise
{
protected:
	int firstParameter;
	int secondParameter;
	int thirdParameter;
	std::vector<float> results;
	const float M_PI = 3.14159265358979323846;
public:
	std::vector<float> right_triangle_first();
	std::vector<float> right_triangle_second();
	std::vector<float> right_triangle_third();
	std::vector<float> right_triangle_fifth();
};

