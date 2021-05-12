#include "WorkWithTests.h"
#include "FileWriter.h"
#include "ExerciseRightTriangle.h"
#include "ExerciseArbitraryTriangle.h"
#include <iostream>

using namespace std;

void WorkWithTests::rightTriangleFirst()
{
	ExerciseRightTriangle task;
	vector <float> results = task.first();
	cout<<"Enter angle A:\n";
	float angleA, angleB, cathet;
	cin>>angleA;
	cout<<"Enter angle B:\n";
	cin>>angleB;
	cout<<"Enter cathet AC:\n";
	cin>>cathet;
	if((static_cast<int>(angleA*10)==static_cast<int>(results[0]*10))&&(static_cast<int>(angleB*10)==static_cast<int>(results[1]*10))&&(static_cast<int>(cathet*10)==static_cast<int>(results[2]*10)))
	{
		cout<<"Your answers are correct!\n";
		FileWriter::upScore(ID);
	}
	else
	{
		cout<<"You are wrong!\n";
		cout << "Angle A: " << results[0] << endl << "angle B: " << results[1] << endl << "cathet AC: " << results[2] << endl;
		FileWriter::downScore(ID);
	}
}

void WorkWithTests::rightTriangleSecond()
{
	ExerciseRightTriangle task;
	vector <float> results = task.second();
	cout << "Enter angle A:\n";
	float angleA, angleB, hypothenuseAB;
	cin >> angleA;
	cout << "Enter angle B:\n";
	cin >> angleB;
	cout << "Enter hypothenuse AB:\n";
	cin >> hypothenuseAB;
	if ((static_cast<int>(angleA * 10) == static_cast<int>(results[1] * 10)) && (static_cast<int>(angleB * 10) == static_cast<int>(results[2] * 10)) && (static_cast<int>(hypothenuseAB * 10) == static_cast<int>(results[0] * 10)))
	{
		cout << "Your answers are correct!\n";
		FileWriter::upScore(ID);
	}
	else
	{
		cout << "You are wrong!\n";
		cout << "Angle A: " << results[1] << endl << "angle B: " << results[2] << endl << "hypothenuse AB: " << results[0] << endl;
		FileWriter::downScore(ID);
	}
}
void WorkWithTests::rightTriangleThird()
{
	ExerciseRightTriangle task;
	vector <float> results = task.third();
	cout << "Enter angle C:\n";
	float angleC, cathetBC, hypothenuseAC;
	cin >> angleC;
	cout << "Enter cathet BC:\n";
	cin >> cathetBC;
	cout << "Enter hypothenuse AC:\n";
	cin >> hypothenuseAC;
	if ((static_cast<int>(cathetBC * 10) == static_cast<int>(results[1] * 10)) && (static_cast<int>(angleC * 10) == static_cast<int>(results[2] * 10)) && (static_cast<int>(hypothenuseAC * 10) == static_cast<int>(results[0] * 10)))
	{
		cout << "Your answers are correct!\n";
		FileWriter::upScore(ID);
	}
	else
	{
		cout << "You are wrong!\n";
		cout << "Angle C: " << results[2] << endl << "Cathet BC: " << results[1] << endl << "Hypothenuse AC: " << results[0] << endl;
		FileWriter::downScore(ID);
	}
}
void WorkWithTests::rightTriangleFourth()
{
	ExerciseRightTriangle task;
	vector <float> results = task.fourth();
	cout << "Enter angle A:\n";
	float angleA, cathetBC, hypothenuseAC;
	cin >> angleA;
	cout << "Enter cathet BC:\n";
	cin >> cathetBC;
	cout << "Enter hypothenuse AC:\n";
	cin >> hypothenuseAC;
	if ((static_cast<int>(angleA * 10) == static_cast<int>(results[1] * 10)) && (static_cast<int>(cathetBC * 10) == static_cast<int>(results[2] * 10)) && (static_cast<int>(hypothenuseAC * 10) == static_cast<int>(results[0] * 10)))
	{
		cout << "Your answers are correct!\n";
		FileWriter::upScore(ID);
	}
	else
	{
		cout << "You are wrong!\n";
		cout << "Angle A: " << results[2] << endl << "Cathet BC: " << results[1] << endl << "Hypothenuse AC: " << results[0] << endl;
		FileWriter::downScore(ID);
	}
}
void WorkWithTests::rightTriangleFifth()
{
	ExerciseRightTriangle task;
	vector <float> results = task.fifth();
	cout << "Enter cathet AC:\n";
	float cathetAC, cathetBC, angleB;
	cin >> cathetAC;
	cout << "Enter cathet BC:\n";
	cin >> cathetBC;
	cout << "Enter angle B:\n";
	cin >> angleB;
	if ((static_cast<int>(cathetBC * 10) == static_cast<int>(results[1] * 10)) && (static_cast<int>(angleB * 10) == static_cast<int>(results[2] * 10)) && (static_cast<int>(cathetAC * 10) == static_cast<int>(results[0] * 10)))
	{
		cout << "Your answers are correct!\n";
		FileWriter::upScore(ID);
	}
	else
	{
		cout << "You are wrong!\n";
		cout << "Cathet AC: " << results[0] << endl << "Cathet BC: " << results[1] << endl << "Angle B: " << results[2] << endl;
		FileWriter::downScore(ID);
	}
}

void WorkWithTests::arbitraryTriangleFirst()
{
	ExerciseArbitraryTriangle task;
	vector <float> results = task.first();
	cout << "Enter angle A:\n";
	float angleC, angleA, angleB;
	cin >> angleA;
	cout << "Enter angle B:\n";
	cin >> angleB;
	cout << "Enter angle C:\n";
	cin >> angleC;
	if ((static_cast<int>(angleB * 10) == static_cast<int>(results[0] * 10)) && (static_cast<int>(angleC * 10) == static_cast<int>(results[1] * 10)) && (static_cast<int>(angleA * 10) == static_cast<int>(results[2] * 10)))
	{
		cout << "Your answers are correct!\n";
		FileWriter::upScore(ID);
	}
	else
	{
		cout << "You are wrong!\n";
		cout << "Angle B: " << results[0] << endl << "Angle C: " << results[1] << endl << "Angle A: " << results[2] << endl;
		FileWriter::downScore(ID);
	}
}
void WorkWithTests::arbitraryTriangleSecond()
{
	ExerciseArbitraryTriangle task;
	vector <float> results = task.second();
	cout << "Enter angle A:\n";
	float angleC, angleA, cathetAC;
	cin >> angleA;
	cout << "Enter angle C:\n";
	cin >> angleC;
	cout << "Enter cathet AC:\n";
	cin >> cathetAC;
	if ((static_cast<int>(cathetAC * 10) == static_cast<int>(results[0] * 10)) && (static_cast<int>(angleC * 10) == static_cast<int>(results[1] * 10)) && (static_cast<int>(angleA * 10) == static_cast<int>(results[2] * 10)))
	{
		cout << "Your answers are correct!\n";
		FileWriter::upScore(ID);
	}
	else
	{
		cout << "You are wrong!\n";
		cout << "Cathet AC: " << results[0] << endl << "Angle C: " << results[1] << endl << "Angle A: " << results[2] << endl;
		FileWriter::downScore(ID);
	}
}
void WorkWithTests::arbitraryTriangleThird()
{
	ExerciseArbitraryTriangle task;
	vector <float> results = task.third();
	cout << "Enter angle C:\n";
	float angleC, cathetAC, cathetBC;
	cin >> angleC;
	cout << "Enter cathet AC:\n";
	cin >> cathetAC;
	cout << "Enter cathet BC:\n";
	cin >> cathetBC;
	if ((static_cast<int>(angleC * 10) == static_cast<int>(results[0] * 10)) && (static_cast<int>(cathetAC * 10) == static_cast<int>(results[1] * 10)) && (static_cast<int>(cathetBC * 10) == static_cast<int>(results[2] * 10)))
	{
		cout << "Your answers are correct!\n";
		FileWriter::upScore(ID);
	}
	else
	{
		cout << "You are wrong!\n";
		cout << "Angle C: " << results[0] << endl << "Cathet AC: " << results[1] << endl << "Cathet BC: " << results[2] << endl;
		FileWriter::downScore(ID);
	}
}