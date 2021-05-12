#pragma once
#include <string>
#include <vector>

class ExerciseRightTriangle
{
	std::vector<float> results;
	std::string condition;
public:
	std::string getCondition();
	std::vector<float> first();
	std::vector<float> second();
	std::vector<float> third();
	std::vector<float> fourth();
	std::vector<float> fifth();
};


