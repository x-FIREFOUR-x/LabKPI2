#include "ExerciseArbitraryTriangle.h"
#include "ViewMessages.h"
#include <cmath>

using namespace std;

std::vector<float> ExerciseArbitraryTriangle::first()
{
	firstParameter = rand() % 20 + 10; //������� AB
	secondParameter = rand() % 20 + 10; //������� BC
	do
	{
		thirdParameter = rand() % 20 + 13; //������� AC
	}
	while((firstParameter+secondParameter<thirdParameter)||(thirdParameter+secondParameter<firstParameter)||(thirdParameter+firstParameter<secondParameter));
	ViewMessages::ConditionOut("������� �������� ��������� ABC. ������ ������ ���� ���������� �� �������� AB = " +
		to_string(firstParameter) + "��,  BC=" + to_string(secondParameter) + "c�, AC = " + to_string(thirdParameter) +"��.");
	results.push_back(round(acos((pow(firstParameter, 2)+pow(secondParameter, 2)-pow(thirdParameter, 2))/(2*firstParameter*secondParameter))*10) / 10.0); //��� B
	results.push_back(round(acos((pow(thirdParameter, 2)+pow(secondParameter, 2)-pow(firstParameter, 2))/(2*thirdParameter*secondParameter))*10) / 10.0); //��� C
	results.push_back(180-results[0]-results[1]); //��� A
	return results;
}

std::vector<float> ExerciseArbitraryTriangle::third()
{
	firstParameter = rand() % 20 + 10; //������� AB
	secondParameter = rand() % 20 + 10; //������� BC
	thirdParameter = rand() % 60 + 20; //��� B
	ViewMessages::ConditionOut("������� �������� ��������� ABC. ������ ������ ���� ���������� �� �������� AB = " +
		to_string(firstParameter) + "��,  BC=" + to_string(secondParameter) + "c�, ������� ��� B = " + to_string(thirdParameter) + ".");
	results.push_back(round(acos((pow(firstParameter, 2)+pow(secondParameter, 2)-pow(thirdParameter, 2))/(2*firstParameter*secondParameter))*10) / 10.0); //��� B
	results.push_back(round(acos((pow(thirdParameter, 2)+pow(secondParameter, 2)-pow(firstParameter, 2))/(2*thirdParameter*secondParameter))*10) / 10.0); //��� C
	results.push_back(180-results[0]-results[1]); //��� A
	return results;
}
