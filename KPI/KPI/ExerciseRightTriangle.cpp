#include "ExerciseRightTriangle.h"
#include "ViewMessages.h"
#include <iostream>
#include <cmath>

# define M_PI           3.14159265358979323846

using namespace std;

vector<float> ExerciseRightTriangle::first()
{
    int AB = rand() % 20 + 10; //ó�������� AB
    int BC = rand() % (AB - 9) + 5; //����� BC
    int C = 90; //������ ��� C
    ViewMessages::ConditionOut("������� ����������� ��������� ABC. ������ ������ ������� � ����� ���� ���������� �� ���������� AB = " +
        to_string(AB) + "�� � ������� BC=" + to_string(BC) + "c�.");
    results.push_back(round(asin((((float)BC) / AB)) * 1800.0 / M_PI) / 10.0); //��� A
    results.push_back(90 - results[0]); //��� B
    results.push_back(round(sqrt(pow(AB, 2) - pow(BC, 2)) * 10) / 10.0); //������� ��
    return results;
}

vector<float> ExerciseRightTriangle::second()
{
    int AC = rand() % 20 + 5; //������ ����� AC
    int BC = rand() % 20 + 5; //������ ����� BC
    int C = 90; //������ ��� C
    ViewMessages::ConditionOut("������� ����������� ��������� ABC. ������ ��������� �� ����� ���� ���������� �� ������� AC = " +
        to_string(AC) + "�� � ������� BC = " + to_string(BC) + "��.");
    results.push_back(round(sqrt(pow(AC, 2) + pow(BC, 2)) * 10) / 10.0); //ó�������� AB
    results.push_back(round(asin((((float)BC) / results[0])) * 1800.0 / M_PI) / 10.0); //��� �
    results.push_back(90 - results[1]); //��� B
    return results;
}

vector<float> ExerciseRightTriangle::third()
{
    int AB = rand() % 30; //����� ��  b
    int A = rand() % 70 + 10; //��������� ������� ��� �  �����
    int B = 90; //������ ��� �
    float angleInRadians = (static_cast<float>(A)) * M_PI / 180;
    ViewMessages::ConditionOut("������� ����������� ��������� ABC. ������ ������ ������� � ����� ���� ���������� �� ������� AB = " +
        to_string(AB) + "�� � ������� ����� � = " + to_string(A) + '.');
    results.push_back(round((static_cast<float>(AB)) / cos(angleInRadians) * 10) / 10.0); // ��������� ��   �
    results.push_back(round(static_cast<float>(AB) * tan(angleInRadians) * 10) / 10.0); // ����� ��   a
    results.push_back(90 - A); // ������� ��� �    ����
    return results;
}

vector<float> ExerciseRightTriangle::fourth()
{
    int AB = rand() % 30; //����� ��  b
    int C = rand() % 70 + 10; //����������� ������� ��� C  ����
    int B = 90; //������ ��� �
    float angleInRadians = (static_cast<float>(C)) * M_PI / 180;

    ViewMessages::ConditionOut("������ ������ ������� � ����� ���� ������������ ���������� �� ������� AB=" +
        to_string(AB) + " � ������� ����� �=" + to_string(C) + '.');
    results.push_back((static_cast<float>(AB)) / sin(angleInRadians)); // ��������� ��   �
    results.push_back(90 - C); // ������� ��� �
    angleInRadians = (results[1]) * M_PI / 180;
    results.push_back(static_cast<float>(AB) * tan(angleInRadians)); // ����� ��   a
    return results;
}

vector<float> ExerciseRightTriangle::fifth()
{
    int AB = rand() % 20 + 10; //ó�������� AB
    int A = rand() % 70 + 10; //��������� ������� ��� �
    int C = 90; //������ ��� �
    float angleInRadians = (static_cast<float>(A)) * M_PI / 180;
    ViewMessages::ConditionOut("������� ����������� ��������� ABC. ������ ������ �� �������� ������� ��� ���������� �� ���������� AB = " +
        to_string(AB) + "�� � ��������� �� ����� ������� ����� � = " + to_string(A) + '.');
    results.push_back(round((float)AB * cos(angleInRadians) * 10) / 10.0); //����� ��
    results.push_back(round((float)AB * sin(angleInRadians) * 10) / 10.0); //����� ��
    results.push_back(90 - A); //������� ��� �
    return results;
}