#include "Exercise.h"
#include "ViewMessages.h"
#include <iostream>
#include <math.h>
using namespace std;

vector<float> Exercise::right_triangle_first()
{
	firstParameter = rand() % 20 + 10; //Гіпотенуза AB
	secondParameter = rand() % (firstParameter - 9) + 5; //Катет BC
	thirdParameter = 90; //Прямий кут C
	ViewMessages::ConditionOut("Заданий прямокутний трикутник ABC. Знайти невідомі сторони й гострі кути трикутника за гіпотенузою AB = " +
		to_string(firstParameter) + "см і катетом BC=" + to_string(secondParameter) + "cм.");
	results.push_back(round(asin((((float)secondParameter)/firstParameter)) * 1800.0 / M_PI) / 10.0); //Кут A
	results.push_back(90 - results[0]); //Кут B
	results.push_back(round(sqrt(pow(firstParameter, 2) - pow(secondParameter, 2)) * 10) / 10.0); //Сторона АС
	return results;
}

vector<float> Exercise::right_triangle_second()
{
	firstParameter = rand() % 20 + 5; //Перший катет AC
	secondParameter = rand() % 20 + 5; //Другий катет BC
	thirdParameter = 90; //Прямий кут C
	ViewMessages::ConditionOut("Заданий прямокутний трикутник ABC. Знайти гіпотенузу та гострі кути трикутника за катетом AC = " +
		to_string(firstParameter) + "см і катетом BC = " + to_string(secondParameter) + "см.");
	results.push_back(round(sqrt(pow(firstParameter, 2) + pow(secondParameter, 2)) * 10) / 10.0); //Гіпотенуза AB
	results.push_back(round(asin((((float)secondParameter)/results[0])) * 1800.0 / M_PI) / 10.0); //Кут А
	results.push_back(90 - results[1]); //Кут B
	return results;
}