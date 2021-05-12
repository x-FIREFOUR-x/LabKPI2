#include "ExerciseRightTriangle.h"
#include "ViewMessages.h"
#include <iostream>
#include <cmath>

# define M_PI           3.14159265358979323846

using namespace std;

vector<float> ExerciseRightTriangle::first()
{
    int AB = rand() % 20 + 10; //Гіпотенуза AB
    int BC = rand() % (AB - 9) + 5; //Катет BC
    int C = 90; //Прямий кут C
    ViewMessages::ConditionOut("Заданий прямокутний трикутник ABC. Знайти невідомі сторони й гострі кути трикутника за гіпотенузою AB = " +
        to_string(AB) + "см і катетом BC=" + to_string(BC) + "cм.");
    results.push_back(round(asin((((float)BC) / AB)) * 1800.0 / M_PI) / 10.0); //Кут A
    results.push_back(90 - results[0]); //Кут B
    results.push_back(round(sqrt(pow(AB, 2) - pow(BC, 2)) * 10) / 10.0); //Сторона АС
    return results;
}

vector<float> ExerciseRightTriangle::second()
{
    int AC = rand() % 20 + 5; //Перший катет AC
    int BC = rand() % 20 + 5; //Другий катет BC
    int C = 90; //Прямий кут C
    ViewMessages::ConditionOut("Заданий прямокутний трикутник ABC. Знайти гіпотенузу та гострі кути трикутника за катетом AC = " +
        to_string(AC) + "см і катетом BC = " + to_string(BC) + "см.");
    results.push_back(round(sqrt(pow(AC, 2) + pow(BC, 2)) * 10) / 10.0); //Гіпотенуза AB
    results.push_back(round(asin((((float)BC) / results[0])) * 1800.0 / M_PI) / 10.0); //Кут А
    results.push_back(90 - results[1]); //Кут B
    return results;
}

vector<float> ExerciseRightTriangle::third()
{
    int AB = rand() % 30; //Катет АВ  b
    int A = rand() % 70 + 10; //прилеглий гострий кут А  альфа
    int B = 90; //Прямий кут В
    float angleInRadians = (static_cast<float>(A)) * M_PI / 180;
    ViewMessages::ConditionOut("Заданий прямокутний трикутник ABC. Знайти невідомі сторони й гострі кути трикутника за катетом AB = " +
        to_string(AB) + "см і гострим кутом А = " + to_string(A) + '.');
    results.push_back(round((static_cast<float>(AB)) / cos(angleInRadians) * 10) / 10.0); // гіпотенуза АС   с
    results.push_back(round(static_cast<float>(AB) * tan(angleInRadians) * 10) / 10.0); // Катет ВС   a
    results.push_back(90 - A); // гострий кут С    Бета
    return results;
}

vector<float> ExerciseRightTriangle::fourth()
{
    int AB = rand() % 30; //Катет АВ  b
    int C = rand() % 70 + 10; //протилежний гострий кут C  бета
    int B = 90; //Прямий кут В
    float angleInRadians = (static_cast<float>(C)) * M_PI / 180;

    ViewMessages::ConditionOut("Знайти невідомі сторони й гострі кути прямокутного трикутника за катетом AB=" +
        to_string(AB) + " і гострим кутом С=" + to_string(C) + '.');
    results.push_back((static_cast<float>(AB)) / sin(angleInRadians)); // гіпотенуза АС   с
    results.push_back(90 - C); // гострий кут А
    angleInRadians = (results[1]) * M_PI / 180;
    results.push_back(static_cast<float>(AB) * tan(angleInRadians)); // Катет ВС   a
    return results;
}

vector<float> ExerciseRightTriangle::fifth()
{
    int AB = rand() % 20 + 10; //Гіпотенуза AB
    int A = rand() % 70 + 10; //Прилеглий гострий кут А
    int C = 90; //Прямий кут С
    float angleInRadians = (static_cast<float>(A)) * M_PI / 180;
    ViewMessages::ConditionOut("Заданий прямокутник трикутник ABC. Знайти катети та невідомий гострий кут трикутника за гіпотенузою AB = " +
        to_string(AB) + "см і прилеглим до нього гострим кутом А = " + to_string(A) + '.');
    results.push_back(round((float)AB * cos(angleInRadians) * 10) / 10.0); //Катет АС
    results.push_back(round((float)AB * sin(angleInRadians) * 10) / 10.0); //Катет ВС
    results.push_back(90 - A); //Гострий кут В
    return results;
}