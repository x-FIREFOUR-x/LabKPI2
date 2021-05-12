#include "ExerciseRightTriangle.h"
#include "ViewMessages.h"
#include <iostream>
#include <cmath>

# define M_PI           3.14159265358979323846

using namespace std;

vector<float> ExerciseRightTriangle::first()
{
    int AB = rand() % 20 + 10; //hypotenuse
    int BC = rand() % (AB - 9) + 5; //cathetus
    int C = 90; //right angle
    ViewMessages::ConditionOut("Заданий прямокутний трикутник ABC. Знайти невідомі сторони й гострі кути трикутника за гіпотенузою AB = " +
        to_string(AB) + "см і катетом BC=" + to_string(BC) + "cм.");
    results.push_back(round(asin((((float)BC) / AB)) * 1800.0 / M_PI) / 10.0); //angle A
    results.push_back(90 - results[0]); //angle B
    results.push_back(round(sqrt(pow(AB, 2) - pow(BC, 2)) * 10) / 10.0); //cathetus АС
    return results;
}

vector<float> ExerciseRightTriangle::second()
{
    int AC = rand() % 20 + 5; //cathetus
    int BC = rand() % 20 + 5; //cathetus
    int C = 90;
    ViewMessages::ConditionOut("Заданий прямокутний трикутник ABC. Знайти гіпотенузу та гострі кути трикутника за катетом AC = " +
        to_string(AC) + "см і катетом BC = " + to_string(BC) + "см.");
    results.push_back(round(sqrt(pow(AC, 2) + pow(BC, 2)) * 10) / 10.0); //hypotenuse AB
    results.push_back(round(asin((((float)BC) / results[0])) * 1800.0 / M_PI) / 10.0); //angle А
    results.push_back(90 - results[1]); //angle B
    return results;
}

vector<float> ExerciseRightTriangle::third()
{
    int AB = rand() % 30; //cathetus
    int A = rand() % 70 + 10; //adjacent acute angle А
    int B = 90;
    float angleInRadians = (static_cast<float>(A)) * M_PI / 180;
    ViewMessages::ConditionOut("Заданий прямокутний трикутник ABC. Знайти невідомі сторони й гострі кути трикутника за катетом AB = " +
        to_string(AB) + "см і гострим кутом А = " + to_string(A) + '.');
    results.push_back(round((static_cast<float>(AB)) / cos(angleInRadians) * 10) / 10.0); // hypotenuse АС
    results.push_back(round(static_cast<float>(AB) * tan(angleInRadians) * 10) / 10.0); // cathetus ВС
    results.push_back(90 - A); // acute angle С
    return results;
}

vector<float> ExerciseRightTriangle::fourth()
{
    int AB = rand() % 30; //cathetus АВ
    int C = rand() % 70 + 10; //opposite acute angle C
    int B = 90; //right angle В
    float angleInRadians = (static_cast<float>(C)) * M_PI / 180;

    ViewMessages::ConditionOut("Знайти невідомі сторони й гострі кути прямокутного трикутника за катетом AB=" +
        to_string(AB) + " і гострим кутом С=" + to_string(C) + '.');
    results.push_back((static_cast<float>(AB)) / sin(angleInRadians)); //hypotenuse АС
    results.push_back(90 - C); //acute angle А
    angleInRadians = (results[1]) * M_PI / 180;
    results.push_back(static_cast<float>(AB) * tan(angleInRadians)); //cathetus ВС
    return results;
}

vector<float> ExerciseRightTriangle::fifth()
{
    int AB = rand() % 20 + 10; //hypotenuse
    int A = rand() % 70 + 10; //adjacent acute angle
    int C = 90;
    float angleInRadians = (static_cast<float>(A)) * M_PI / 180;
    ViewMessages::ConditionOut("Заданий прямокутник трикутник ABC. Знайти катети та невідомий гострий кут трикутника за гіпотенузою AB = " +
        to_string(AB) + "см і прилеглим до нього гострим кутом А = " + to_string(A) + '.');
    results.push_back(round((float)AB * cos(angleInRadians) * 10) / 10.0); //cathetus АС
    results.push_back(round((float)AB * sin(angleInRadians) * 10) / 10.0); //cathetus ВС
    results.push_back(90 - A); //cathetus В
    return results;
}