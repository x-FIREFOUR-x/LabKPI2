#pragma once
#include <string>
#include <vector>

class ExerciseArbitraryTriangle
{
	std::vector<float> results;
	std::string condition;
public:
	std::string getCondition();
	std::vector<float> first();
	std::vector<float> second();
	std::vector<float> third();
};

