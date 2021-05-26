#pragma once
#include <string>
#include <vector>

class ExerciseArbitraryTriangle
{
	std::vector<std::pair<std::string, float>> results;
	std::string condition;
public:
	std::string getCondition();
	std::vector<std::pair<std::string, float>> first();
	std::vector<std::pair<std::string, float>> second();
	std::vector<std::pair<std::string, float>> third();
};

