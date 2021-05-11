#include "WorkWithTests.h"
#include "Exercise.h"
#include <iostream>
#include <locale>

using namespace std;

void WorkWithTests::testsWithRightTriangle()
{
	setlocale(LC_ALL, "RU");
	for(int i=0;i<5;i++)
	{
		Exercise task;
		vector <float> results = task.right_triangle_first();
		//cout << endl << results[0];
		//cout << endl << results[1];
		//cout << endl << results[2];
		cout<<"Enter angle A:\n";
		float angleA, angleB, cathet;
		cin>>angleA;
		cout<<"Enter angle B:\n";
		cin>>angleB;
		cout<<"Enter cathet AC:\n";
		cin>>cathet;
		if((static_cast<int>(angleA*10)==static_cast<int>(results[0]*10))&&(static_cast<int>(angleA*10)==static_cast<int>(results[0]*10))&&(static_cast<int>(angleA*10)==static_cast<int>(results[0]*10)))
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
