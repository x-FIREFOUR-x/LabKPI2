#include "Exercise.h"
#include "ViewMessages.h"
#include <iostream>
#include <cmath>
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

vector<float> Exercise::right_triangle_third()
{
  firstParameter = rand() % 30; //Катет АВ  b
  secondParameter = rand() % 70 + 10; //прилеглий гострий кут А  альфа
  thirdParameter = 90; //Прямий кут В
  float angleInRadians=(static_cast<float>(secondParameter)) * M_PI / 180;
  ViewMessages::ConditionOut("Заданий прямокутний трикутник ABC. Знайти невідомі сторони й гострі кути трикутника за катетом AB = " +
    to_string(firstParameter) + "см і гострим кутом А = " + to_string(secondParameter) + '.');
  results.push_back(round((static_cast<float>(firstParameter))/cos(angleInRadians) * 10)/10.0); // гіпотенуза АС   с
  results.push_back(round(static_cast<float>(firstParameter)*tan(angleInRadians) * 10) / 10.0); // Катет ВС   a
  results.push_back(90 - secondParameter); // гострий кут С    Бета
  return results;
}

vector<float> Exercise::right_triangle_fourth()
{
  firstParameter = rand() % 30; //Катет АВ  b
  secondParameter = rand() % 70 + 10; //протилежний гострий кут C  бета
  thirdParameter = 90; //Прямий кут В
  float angleInRadians=(static_cast<float>(secondParameter))*M_PI/180;
  
  ViewMessages::ConditionOut("Знайти невідомі сторони й гострі кути прямокутного трикутника за катетом AB=" +
    to_string(firstParameter) + " і гострим кутом С=" + to_string(secondParameter) + '.');
  results.push_back((static_cast<float>(firstParameter))/sin(angleInRadians)); // гіпотенуза АС   с
  results.push_back(90-secondParameter); // гострий кут А
  angleInRadians=(results[1])*M_PI/180;
  results.push_back(static_cast<float>(firstParameter)*tan(angleInRadians)); // Катет ВС   a
  return results;
}

vector<float> Exercise::right_triangle_fifth()
{
  firstParameter = rand() % 20 + 10; //Гіпотенуза AB
  secondParameter = rand() % 70 + 10; //Прилеглий гострий кут А
  thirdParameter = 90; //Прямий кут С
  float angleInRadians = (static_cast<float>(secondParameter)) * M_PI / 180;
  ViewMessages::ConditionOut("Заданий прямокутник трикутник ABC. Знайти катети та невідомий гострий кут трикутника за гіпотенузою AB = " +
    to_string(firstParameter) + "см і прилеглим до нього гострим кутом А = " + to_string(secondParameter) + '.');
  results.push_back(round((float)firstParameter * cos(angleInRadians) * 10) / 10.0); //Катет АС
  results.push_back(round((float)firstParameter * sin(angleInRadians) * 10) / 10.0); //Катет ВС
  results.push_back(90 - secondParameter); //Гострий кут В
  return results;
}