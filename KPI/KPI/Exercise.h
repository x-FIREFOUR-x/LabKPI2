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
public:
	std::vector<float> right_triangle_first();
};
