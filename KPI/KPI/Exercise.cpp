#include "Exercise.h"
#include "ViewMessages.h"
#include <iostream>
#include <math.h>
using namespace std;

vector<float> Exercise::right_triangle_first()
{
	const float M_PI = 3.14159265358979323846;
	firstParameter = rand() % 20 + 10; //Гіпотенуза
	secondParameter = rand() % (firstParameter - 9) + 5; //Катет
	thirdParameter = 90; //Прямий кут
	ViewMessages::ConditionOut("Заданий трикутник ABC. Знайти невідомі сторони й гострі кути прямокутного трикутника за гіпотенузою AB=" +
		to_string(firstParameter) + " і катетом BC=" + to_string(secondParameter) + '.');
	results.push_back(round(asin((((float)secondParameter)/firstParameter)) * 1800.0 / M_PI) / 10.0); // Кут А
	results.push_back(90 - results[0]); // Кут В
	results.push_back(round(sqrt(pow(firstParameter, 2) - pow(secondParameter, 2)) * 10) / 10.0); // Сторона АС
	return results;
}