#include "Exercise.h"
#include "ViewMessages.h"
#include <iostream>
#include <math.h>
using namespace std;

vector<float> Exercise::right_triangle_first()
{
	firstParameter = rand() % 20 + 10; //ó�������� AB
	secondParameter = rand() % (firstParameter - 9) + 5; //����� BC
	thirdParameter = 90; //������ ��� C
	ViewMessages::ConditionOut("������� ����������� ��������� ABC. ������ ������ ������� � ����� ���� ���������� �� ���������� AB = " +
		to_string(firstParameter) + "�� � ������� BC=" + to_string(secondParameter) + "c�.");
	results.push_back(round(asin((((float)secondParameter)/firstParameter)) * 1800.0 / M_PI) / 10.0); //��� A
	results.push_back(90 - results[0]); //��� B
	results.push_back(round(sqrt(pow(firstParameter, 2) - pow(secondParameter, 2)) * 10) / 10.0); //������� ��
	return results;
}

vector<float> Exercise::right_triangle_second()
{
	firstParameter = rand() % 20 + 5; //������ ����� AC
	secondParameter = rand() % 20 + 5; //������ ����� BC
	thirdParameter = 90; //������ ��� C
	ViewMessages::ConditionOut("������� ����������� ��������� ABC. ������ ��������� �� ����� ���� ���������� �� ������� AC = " +
		to_string(firstParameter) + "�� � ������� BC = " + to_string(secondParameter) + "��.");
	results.push_back(round(sqrt(pow(firstParameter, 2) + pow(secondParameter, 2)) * 10) / 10.0); //ó�������� AB
	results.push_back(round(asin((((float)secondParameter)/results[0])) * 1800.0 / M_PI) / 10.0); //��� �
	results.push_back(90 - results[1]); //��� B
	return results;
}