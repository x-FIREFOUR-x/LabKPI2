#include "ExerciseArbitraryTriangle.h"
#include "ViewMessages.h"
#include <cmath>

#define M_PI 3.14159265358979323846

using namespace std;

std::string ExerciseArbitraryTriangle::getCondition()
{
	return condition;
}

std::vector<float> ExerciseArbitraryTriangle::first()
{
	int AB = rand() % 20 + 10;
	int BC = rand() % 20 + 10;
	int AC;
	do
	{
		AC = rand() % 20 + 13; 
	}
	while((AB+BC<AC)||(AC+BC<AB)||(AC+AB<BC));
	condition= "Заданий довільний трикутник ABC. Знайти невідомі кути трикутника за стороною AB = " + to_string(AB) + "см,  BC = " + to_string(BC) + "cм, AC = " + to_string(AC) + "см.\n(Відповіді давати з точніст'ю з одного знаку після коми)";
	float B=acos((pow(AB, 2)+pow(BC, 2)-pow(AC, 2))/(2 * AB * BC));
	float C=acos((pow(AC, 2)+pow(BC, 2)-pow(AB, 2))/(2 * AC * BC));
	float A=180-B-C;
	results.push_back(round(B*10) / 10.0);
	results.push_back(round(C*10) / 10.0);
	results.push_back(round(A*10) / 10.0);
	return results;
}

std::vector<float> ExerciseArbitraryTriangle::second()
{
	int AB = rand() % 20 + 10;
	int BC = rand() % 20 + 10;
	int B;
	do
	{
		B = rand() % 130 + 20;
	} while (B == 90);
	condition = "Заданий довільний трикутник ABC. Знайти невідомі кути та сторону трикутника за стороною AB = " + to_string(AB) + "см, ВС = " + to_string(BC) + "см та кут В = " + to_string(B) + ".\n(Відповіді давати з точніст'ю з одного знаку після коми)";
	float AC = sqrt(pow(AB, 2) + pow(BC, 2) - 2 * AB * BC * cos(B * M_PI / 180));
	results.push_back(round(AC * 10) / 10.0);
	float C = acos((pow(results[0], 2) + pow(BC, 2) - pow(AB, 2)) / (2 * AC * BC));
	float A = 180 - B - C;
	results.push_back(round(C * 10) / 10.0);
	results.push_back(round(A * 10) / 10.0);
	return results;
}

std::vector<float> ExerciseArbitraryTriangle::third()
{
	int AB = rand() % 20 + 10;
	int B = rand () % 130 + 20;
	int A;
	do
	{
		A = rand() % 130 + 20; 
	} while (A + B > 175);
	condition = "Заданий довільний трикутник ABC. Знайти невідомі кути та сторону трикутника за стороною AB = " + to_string(AB) + "см, ВС = " + to_string(B) + "см та кут В = " + to_string(A) + ".\n(Відповіді давати з точніст'ю з одного знаку після коми)";
	float C=180 - B - A;
	results.push_back(C);
	float AC=AB * sin(B * M_PI / 180.0) / sin(results[0] * M_PI / 180.0);
	float BC=AB * sin(A * M_PI / 180.0) / sin(results[0] * M_PI / 180.0);
	results.push_back(round(AC * 10) / 10.0);
	results.push_back(round(BC * 10) / 10.0);
	return results;
}