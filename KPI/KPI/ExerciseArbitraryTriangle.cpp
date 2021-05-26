#include "ExerciseArbitraryTriangle.h"
#include "ViewMessages.h"
#include <cmath>

#define M_PI 3.14159265358979323846

using namespace std;

string ExerciseArbitraryTriangle::getCondition()
{
	return condition;
}

vector<pair<string, float>> ExerciseArbitraryTriangle::first()
{
	int AB = rand() % 20 + 10;
	int BC = rand() % 20 + 10;
	int AC;
	do
	{
		AC = rand() % 20 + 13; 
	}
	while((AB+BC<AC)||(AC+BC<AB)||(AC+AB<BC));
	condition="������� �������� ��������� ABC. ������ ������ ���� ���������� �� �������� AB = " + to_string(AB) + "��,  BC = " + to_string(BC) + "c�, AC = " + to_string(AC) + "��.";
	float B=acos((pow(AB, 2)+pow(BC, 2)-pow(AC, 2))/(2 * AB * BC));
	float C=acos((pow(AC, 2)+pow(BC, 2)-pow(AB, 2))/(2 * AC * BC));
	float A=180-B-C;
	results.emplace_back(make_pair("B",round(B*10) / 10.0));
	results.emplace_back(make_pair("C",round(C*10) / 10.0));
	results.emplace_back(make_pair("A",round(A*10) / 10.0));
	return results;
}

vector<pair<string, float>> ExerciseArbitraryTriangle::second()
{
	int AB = rand() % 20 + 10;
	int BC = rand() % 20 + 10;
	int B;
	do
	{
		B = rand() % 130 + 20;
	} while (B == 90);
	condition="������� �������� ��������� ABC. ������ ������ ���� �� ������� ���������� �� �������� AB = " + to_string(AB) + "��, �� = " + to_string(BC) + "�� �� ��� � = " + to_string(B) + '.';
	float AC=sqrt(pow(AB,2)+pow(BC,2) - 2 * AB * BC * cos(B * M_PI / 180));
	float C=acos((pow(AC, 2) + pow(BC, 2) - pow(AB, 2)) / (2 * AC * BC));
	float A=180 - B - C;
	results.emplace_back(make_pair("AC",round( AC* 10)/10.0));
	results.emplace_back(make_pair("C",round( C* 10) / 10.0));
	results.emplace_back(make_pair("A",round( A* 10) / 10.0));
	return results;
}

vector<pair<string, float>> ExerciseArbitraryTriangle::third()
{
	int AB = rand() % 20 + 10;
	int B = rand () % 130 + 20;
	int A;
	do
	{
		A = rand() % 130 + 20; 
	} while (A + B < 175);
	condition="������� �������� ��������� ABC. ������ ������ ������� �� ��� ���������� �� �������� = " + to_string(AB) + "��, ����� � = " + to_string(B) + " �� ����� A = " + to_string(A) + '.';
	float C=180 - B - A;
	float AC=AB * sin(B * M_PI / 180.0) / sin(C * M_PI / 180.0);
	float BC=AB * sin(A * M_PI / 180.0) / sin(C * M_PI / 180.0);
	results.emplace_back(make_pair("C", C)); 
	results.emplace_back(make_pair("AC",round(AC * 10) / 10.0));
	results.emplace_back(make_pair("BC",round(BC * 10) / 10.0));
	return results;
}