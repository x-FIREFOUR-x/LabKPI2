#pragma once
#include <string>
#include <vector>

class ExerciseRightTriangle
{
	std::vector<std::pair<std::string, float>> results;
	std::string condition;
public:
	std::string getCondition();
	std::vector<std::pair<std::string, float>> first();
	std::vector<std::pair<std::string, float>> second();
	std::vector<std::pair<std::string, float>> third();
	std::vector<std::pair<std::string, float>> fourth();
	std::vector<std::pair<std::string, float>> fifth();
};


