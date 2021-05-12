#include "ExerciseArbitraryTriangle.h"
#include "ViewMessages.h"
#include <cmath>

# define M_PI           3.14159265358979323846

using namespace std;

std::vector<float> ExerciseArbitraryTriangle::first()
{
	int AB = rand() % 20 + 10; //������� AB
	int BC = rand() % 20 + 10; //������� BC
	int AC;						//������� AC
	do
	{
		AC = rand() % 20 + 13; 
	}
	while((AB+BC<AC)||(AC+BC<AB)||(AC+AB<BC));
	ViewMessages::ConditionOut("������� �������� ��������� ABC. ������ ������ ���� ���������� �� �������� AB = " +
		to_string(AB) + "��,  BC = " + to_string(BC) + "c�, AC = " + to_string(AC) + "��.");
	results.push_back(round(acos((pow(AB, 2)+pow(BC, 2)-pow(AC, 2))/(2 * AB * BC))*10) / 10.0); //��� B
	results.push_back(round(acos((pow(AC, 2)+pow(BC, 2)-pow(AB, 2))/(2 * AC * BC))*10) / 10.0); //��� C
	results.push_back(180-results[0]-results[1]); //��� A
	return results;
}

std::vector<float> ExerciseArbitraryTriangle::second()
{
	int AB = rand() % 20 + 10; //������� AB
	int BC = rand() % 20 + 10; //������� BC
	int B;						 //��� B
	do
	{
		B = rand() % 130 + 20;
	} while (B == 90);
	ViewMessages::ConditionOut("������� �������� ��������� ABC. ������ ������ ���� �� ������� ���������� �� �������� AB = " +
		to_string(AB) + "��, �� = " + to_string(BC) + "�� �� ��� � = " + to_string(B) + '.');
	results.push_back(round(sqrt(pow(AB,2)+pow(BC,2) - 2 * AB * BC * cos(B * M_PI / 180)) * 10)/10.0); //������� AC
	results.push_back(round(acos((pow(results[0], 2) + pow(BC, 2) - pow(AB, 2)) / (2 * results[0] * BC)) * 10) / 10.0); //��� �
	results.push_back(180 - B - results[1]); //��� �
	return results;
}

std::vector<float> ExerciseArbitraryTriangle::third()
{
	int AB = rand() % 20 + 10; //������� AB
	int B = rand () % 130 + 20; //��� B
	int A;//��� A
	do
	{
		A = rand() % 130 + 20; 
	} while (A + B < 175);
	ViewMessages::ConditionOut("������� �������� ��������� ABC. ������ ������ ������� �� ��� ���������� �� �������� = " +
		to_string(AB) + "��, ����� � = " + to_string(B) + " �� ����� A = " + to_string(A) + '.');
	results.push_back(180 - B - A); // ��� �
	results.push_back(round(AB * sin(B * M_PI / 180.0) / sin(results[0] * M_PI / 180.0) * 10) / 10.0); //������� ��
	results.push_back(round(AB * sin(A * M_PI / 180.0) / sin(results[0] * M_PI / 180.0) * 10) / 10.0); //������� BC
	return results;
}