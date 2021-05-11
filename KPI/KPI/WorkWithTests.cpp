#include "WorkWithTests.h"
#include "ExerciseRightTriangle.h"
#include <iostream>
#include <locale>

using namespace std;

void WorkWithTests::rightTriangleFirst()
{
	setlocale(LC_ALL, "RU");
	for(int i=0;i<5;i++)
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
		}
		else
		{
			cout<<"You are wrong!\n";
			cout<<"Angle A: "<<results[0]<<"angle B: "<<results[1]<<"cathet AC: "<<results[2];
		}
	}
}

void WorkWithTests::rightTriangleSecond()
{
	setlocale(LC_ALL, "RU");
	for (int i = 0; i < 5; i++)
	{
		ExerciseRightTriangle task;
		vector <float> results = task.first();
		cout << "Enter angle A:\n";
		float angleA, angleB, cathet;
		cin >> angleA;
		cout << "Enter angle B:\n";
		cin >> angleB;
		cout << "Enter cathet AC:\n";
		cin >> cathet;
		if ((static_cast<int>(angleA * 10) == static_cast<int>(results[0] * 10)) && (static_cast<int>(angleB * 10) == static_cast<int>(results[1] * 10)) && (static_cast<int>(cathet * 10) == static_cast<int>(results[2] * 10)))
		{
			cout << "Your answers are correct!\n";
		}
		else
		{
			cout << "You are wrong!\n";
			cout << "Angle A: " << results[0] << "angle B: " << results[1] << "cathet AC: " << results[2];
		}
	}
}
