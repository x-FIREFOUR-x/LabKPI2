#include "ExerciseArbitraryTriangle.h"
#include "ViewMessages.h"
#include <cmath>

using namespace std;

std::vector<float> ExerciseArbitraryTriangle::first()
{
	firstParameter = rand() % 20 + 10; //сторона AB
	secondParameter = rand() % 20 + 10; //сторона BC
	do
	{
		thirdParameter = rand() % 20 + 13; //сторона AC
	}
	while((firstParameter+secondParameter<thirdParameter)||(thirdParameter+secondParameter<firstParameter)||(thirdParameter+firstParameter<secondParameter));
	ViewMessages::ConditionOut("Заданий довільний трикутник ABC. Знайти невідомі кути трикутника за стороною AB = " +
		to_string(firstParameter) + "см,  BC=" + to_string(secondParameter) + "cм, AC = " + to_string(thirdParameter) +"см.");
	results.push_back(round(acos((pow(firstParameter, 2)+pow(secondParameter, 2)-pow(thirdParameter, 2))/(2*firstParameter*secondParameter))*10) / 10.0); //Кут B
	results.push_back(round(acos((pow(thirdParameter, 2)+pow(secondParameter, 2)-pow(firstParameter, 2))/(2*thirdParameter*secondParameter))*10) / 10.0); //Кут C
	results.push_back(180-results[0]-results[1]); //Кут A
	return results;
}

std::vector<float> ExerciseArbitraryTriangle::third()
{
	firstParameter = rand() % 20 + 10; //сторона AB
	secondParameter = rand() % 20 + 10; //сторона BC
	thirdParameter = rand() % 60 + 20; //кут B
	ViewMessages::ConditionOut("Заданий довільний трикутник ABC. Знайти невідомі кути трикутника за стороною AB = " +
		to_string(firstParameter) + "см,  BC=" + to_string(secondParameter) + "cм, гострий кут B = " + to_string(thirdParameter) + ".");
	results.push_back(round(acos((pow(firstParameter, 2)+pow(secondParameter, 2)-pow(thirdParameter, 2))/(2*firstParameter*secondParameter))*10) / 10.0); //Кут B
	results.push_back(round(acos((pow(thirdParameter, 2)+pow(secondParameter, 2)-pow(firstParameter, 2))/(2*thirdParameter*secondParameter))*10) / 10.0); //Кут C
	results.push_back(180-results[0]-results[1]); //Кут A
	return results;
}
