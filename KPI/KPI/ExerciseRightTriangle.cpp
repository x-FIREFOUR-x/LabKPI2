#include "ExerciseRightTriangle.h"
#include "ViewMessages.h"
#include <iostream>
#include <cmath>

#define M_PI 3.14159265358979323846

using namespace std;

std::string ExerciseRightTriangle::getCondition()
{
	return condition;
}

vector<float> ExerciseRightTriangle::first()
{
    int AB = rand() % 20 + 10; //hypotenuse
    int BC = rand() % (AB - 9) + 5; //cathetus
	condition="������� ����������� ��������� ABC. ������ ������ ������� � ����� ���� ���������� �� ���������� AB = " + to_string(AB) + "�� � ������� BC=" + to_string(BC) + "c�.";
	float A=asin((((float)BC) / AB)) * 180.0 / M_PI;
    float B=90-A;
	float AC=sqrt(pow(AB, 2) - pow(BC, 2));
    results.push_back(round( A*10)/ 10.0);
    results.push_back(round( B*10)/ 10.0);
    results.push_back(round(AC * 10) / 10.0);
    return results;
}

vector<float> ExerciseRightTriangle::second()
{
    int AC = rand() % 20 + 5; //cathetus
    int BC = rand() % 20 + 5; //cathetus
	condition = "������� ����������� ��������� ABC. ������ ��������� �� ����� ���� ���������� �� ������� AC = " + to_string(AC) + "�� � ������� BC = " + to_string(BC) + "��.";
	float AB=sqrt(pow(AC, 2) + pow(BC, 2));//hypotenuse
	float A=asin((((float)BC) / AB)) * 180.0 / M_PI;
	float B=90-A;
    results.push_back(round( AB* 10) / 10.0);
    results.push_back(round(A)/ 10.0);
    results.push_back(B);
    return results;
}

vector<float> ExerciseRightTriangle::third()
{
    int AB = rand() % 30; //cathetus
    int A = rand() % 70 + 10; //adjacent acute angle �
    float angleInRadians = (static_cast<float>(A)) * M_PI / 180;
	condition="������� ����������� ��������� ABC. ������ ������ ������� � ����� ���� ���������� �� ������� AB = " + to_string(AB) + "�� � ������� ����� � = " + to_string(A) + '.';
	float AC=static_cast<float>(AB) / cos(angleInRadians);//hypotenuse
	float BC=static_cast<float>(AB) * tan(angleInRadians);//cathetus
	float C=90 - A;                                       // acute angle
    results.push_back(round( AC* 10) / 10.0);
    results.push_back(round( BC* 10) / 10.0);
    results.push_back(C);
    return results;
}

vector<float> ExerciseRightTriangle::fourth()
{
    int AB = rand() % 30; //cathetus ��
    int C = rand() % 70 + 10; //opposite acute angle C
    float angleInRadians = (static_cast<float>(C)) * M_PI / 180;
	condition="������ ������ ������� � ����� ���� ������������ ���������� �� ������� AB=" + to_string(AB) + " � ������� ����� �=" + to_string(C) + '.';
	float AC=(static_cast<float>(AB)) / sin(angleInRadians);//hypotenuse
	float A=90-C;                                           //acute angle
    float BC=static_cast<float>(AB) * tan( (A) * M_PI / 180);//cathetus
    results.push_back(AC);
    results.push_back(A);
    results.push_back(BC);
    return results;
}

vector<float> ExerciseRightTriangle::fifth()
{
    int AB = rand() % 20 + 10; //hypotenuse
    int A = rand() % 70 + 10; //adjacent acute angle
    float angleInRadians = (static_cast<float>(A)) * M_PI / 180;
	condition="������� ����������� ��������� ABC. ������ ������ �� �������� ������� ��� ���������� �� ���������� AB = " + to_string(AB) + "�� � ��������� �� ����� ������� ����� � = " + to_string(A) + '.';
	float AC=(static_cast<float> (AB)) * cos(angleInRadians);       //cathetus
	float BC=(static_cast<float> (AB)) * sin(angleInRadians);       //cathetus
	float B=90-A;
    results.push_back(round( AC* 10) / 10.0);
    results.push_back(round( BC* 10) / 10.0);
    results.push_back(B);
    return results;
}