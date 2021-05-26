#include "WorkWithTests.h"
#include "FileWriter.h"
#include "ExerciseRightTriangle.h"
#include "ExerciseArbitraryTriangle.h"
#include <iostream>
#include "ViewMessages.h"
#include "Validation.h"

using namespace std;

void WorkWithTests::rightTriangleFirst()
{
	ExerciseRightTriangle task;
	vector <float> results = task.first();
	ViewMessages::ConditionOut(task.getCondition());
	float angleA, angleB, cathetAC;
	string strAngleA, strAngleB, strCathetAC;
	do
	{
		cout << "Enter angle A:\n";
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, strAngleA);
		cout << "Enter angle B:\n";
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, strAngleB);
		cout << "Enter cathet AC:\n";
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, strCathetAC);
	} while (!Validation::CheckFloat(strAngleA) || !Validation::CheckFloat(strAngleB) || !Validation::CheckFloat(strCathetAC));
	angleA = stof(strAngleA);
	angleB = stof(strAngleB);
	cathetAC = stof(strCathetAC);
	if((static_cast<int>(angleA*10)==static_cast<int>(results[0]*10))&&(static_cast<int>(angleB*10)==static_cast<int>(results[1]*10))&&(static_cast<int>(cathetAC*10)==static_cast<int>(results[2]*10)))
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
	ViewMessages::ConditionOut(task.getCondition());
	float angleA, angleB, hypothenuseAB;
	string strAngleA, strAngleB, strHypothenuseAB;
	do
	{
		cout << "Enter angle A:\n";
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, strAngleA);
		cout << "Enter angle B:\n";
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, strAngleB);
		cout << "Enter hypothenuse AB:\n";
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, strHypothenuseAB);
	} while (!Validation::CheckFloat(strAngleA) || !Validation::CheckFloat(strAngleB) || !Validation::CheckFloat(strHypothenuseAB));
	angleA = stof(strAngleA);
	angleB = stof(strAngleB);
	hypothenuseAB = stof(strHypothenuseAB);
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
	ViewMessages::ConditionOut(task.getCondition());
	float angleC, cathetBC, hypothenuseAC;
	string strAngleC, strCathetBC, strHypothenuseAC;
	do
	{
		cout << "Enter angle C:\n";
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, strAngleC);
		cout << "Enter cathet BC:\n";
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, strCathetBC);
		cout << "Enter hypothenuse AC:\n";
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, strHypothenuseAC);
	} while (!Validation::CheckFloat(strAngleC) || !Validation::CheckFloat(strCathetBC) || !Validation::CheckFloat(strHypothenuseAC));
	angleC = stof(strAngleC);
	cathetBC = stof(strCathetBC);
	hypothenuseAC = stof(strHypothenuseAC);
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
	ViewMessages::ConditionOut(task.getCondition());
	float angleA, cathetBC, hypothenuseAC;
	string strAngleA, strCathetBC, strHypothenuseAC;
	do
	{
		cout << "Enter angle A:\n";
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, strAngleA);
		cout << "Enter cathet BC:\n";
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, strCathetBC);
		cout << "Enter hypothenuse AC:\n";
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, strHypothenuseAC);
	} while (!Validation::CheckFloat(strAngleA) || !Validation::CheckFloat(strCathetBC) || !Validation::CheckFloat(strHypothenuseAC));
	angleA = stof(strAngleA);
	cathetBC = stof(strCathetBC);
	hypothenuseAC = stof(strHypothenuseAC);
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
	ViewMessages::ConditionOut(task.getCondition());
	float cathetAC, cathetBC, angleB;
	string strCathetAC, strCathetBC, strAngleB;
	do
	{
		cout << "Enter cathet AC:\n";
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, strCathetAC);
		cout << "Enter cathet BC:\n";
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, strCathetBC);
		cout << "Enter angle B:\n";
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, strAngleB);
	} while (!Validation::CheckFloat(strCathetAC) || !Validation::CheckFloat(strCathetBC) || !Validation::CheckFloat(strAngleB));
	cathetAC = stof(strCathetAC);
	cathetBC = stof(strCathetBC);
	angleB = stof(strAngleB);
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
	ViewMessages::ConditionOut(task.getCondition());
	float angleC, angleA, angleB;
	string strAngleC, strAngleA, strAngleB;
	do
	{
		cout << "Enter angle A:\n";
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, strAngleA);
		cout << "Enter angle B:\n";
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, strAngleB);
		cout << "Enter angle C:\n";
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, strAngleC);
	} while (!Validation::CheckFloat(strAngleA) || !Validation::CheckFloat(strAngleB) || !Validation::CheckFloat(strAngleC));
	angleA = stof(strAngleA);
	angleB = stof(strAngleB);
	angleC = stof(strAngleC);
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
	ViewMessages::ConditionOut(task.getCondition());
	float angleC, angleA, cathetAC;
	string strAngleC, strAngleA, strCathetAC;
	do
	{
		cout << "Enter angle A:\n";
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, strAngleC);
		cout << "Enter angle C:\n";
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, strAngleA);
		cout << "Enter cathet AC:\n";
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, strCathetAC);
	} while (!Validation::CheckFloat(strAngleA) || !Validation::CheckFloat(strAngleC) || !Validation::CheckFloat(strCathetAC));
	angleA = stof(strAngleA);
	angleC = stof(strAngleC);
	cathetAC = stof(strCathetAC);
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
	ViewMessages::ConditionOut(task.getCondition());
	float angleC, cathetAC, cathetBC;
	string strAngleC, strCathetAC, strCathetBC;
	do
	{
		cout << "Enter angle C:\n";
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, strAngleC);
		cout << "Enter cathet AC:\n";
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, strCathetAC);
		cout << "Enter cathet BC:\n";
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, strCathetBC);
	} while (!Validation::CheckFloat(strAngleC) || !Validation::CheckFloat(strCathetAC) || !Validation::CheckFloat(strCathetAC));
	angleC = stof(strAngleC);
	cathetAC = stof(strCathetAC);
	cathetBC = stof(strCathetBC);
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