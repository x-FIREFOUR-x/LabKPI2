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
		to_string(firstParameter) + "см,  BC = " + to_string(secondParameter) + "cм, AC = " + to_string(thirdParameter) + "см.");
	results.push_back(round(acos((pow(firstParameter, 2)+pow(secondParameter, 2)-pow(thirdParameter, 2))/(2 * firstParameter * secondParameter))*10) / 10.0); //Кут B
	results.push_back(round(acos((pow(thirdParameter, 2)+pow(secondParameter, 2)-pow(firstParameter, 2))/(2 * thirdParameter * secondParameter))*10) / 10.0); //Кут C
	results.push_back(180-results[0]-results[1]); //Кут A
	return results;
}

std::vector<float> ExerciseArbitraryTriangle::second()
{
	firstParameter = rand() % 20 + 10; //Сторона AB
	secondParameter = rand() % 20 + 10; //Сторона BC
	do
	{
		thirdParameter = rand() % 130 + 20; //кут B
	} while (thirdParameter == 90);
	ViewMessages::ConditionOut("Заданий довільний трикутник ABC. Знайти невідомі кути та сторону трикутника за стороною AB = " +
		to_string(firstParameter) + "см, ВС = " + to_string(secondParameter) + "см та кут В = " + to_string(thirdParameter) + '.');
	results.push_back(round(sqrt(pow(firstParameter,2)+pow(secondParameter,2) - 2 * firstParameter * secondParameter * cos(thirdParameter * M_PI / 180)) * 10)/10.0); //Сторона AC
	results.push_back(round(acos((pow(results[0], 2) + pow(secondParameter, 2) - pow(firstParameter, 2)) / (2 * results[0] * secondParameter)) * 10) / 10.0); //Кут С
	results.push_back(180 - thirdParameter - results[1]); //Кут А
	return results;
}

std::vector<float> ExerciseArbitraryTriangle::third()
{
	firstParameter = rand() % 20 + 10; //Сторона AB
	secondParameter = rand () % 130 + 20; //Кут B
	do
	{
		thirdParameter = rand() % 130 + 20; //Кут A
	} while (thirdParameter + secondParameter < 175);
	ViewMessages::ConditionOut("Заданий довільний трикутник ABC. Знайти невідомі сторони та кут трикутника за стороною = " +
		to_string(firstParameter) + "см, кутом В = " + to_string(secondParameter) + " та кутом A = " + to_string(thirdParameter) + '.');
	results.push_back(180 - secondParameter - thirdParameter); // Кут С
	results.push_back(round(firstParameter * sin(secondParameter * M_PI / 180.0) / sin(results[0] * M_PI / 180.0) * 10) / 10.0); //Сторона АС
	results.push_back(round(firstParameter * sin(thirdParameter * M_PI / 180.0) / sin(results[0] * M_PI / 180.0) * 10) / 10.0); //Сторона BC
	return results;
}