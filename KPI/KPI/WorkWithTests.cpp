#include "WorkWithTests.h"
#include "FileWriter.h"
#include "ExerciseRightTriangle.h"
#include "ExerciseArbitraryTriangle.h"
#include <iostream>
#include "ViewMessages.h"
#include "Validation.h"
#include "SolutionPrinterTriangle.h"
#include "SolutionPrinterRightTriangle.h"
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
		if (!isControlTest)
		{
			cout << "Your answers are correct!\n";
		FileWriter::setSolved(ID, 0);
		}
		else
			count++;
	}
	else
	{
		if (!isControlTest)
		{
			cout << "You are wrong!\n";
			SolutionPrinterRightTriangle::printFirstSolution(results);
		}
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
		if (!isControlTest)
		{
			cout << "Your answers are correct!\n";
		FileWriter::setSolved(ID, 1);
		}
		else
			count++;
	}
	else
	{
		if (!isControlTest)
		{
			cout << "You are wrong!\n";
			SolutionPrinterRightTriangle::printSecondSolution(results);
		}
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
		if (!isControlTest)
		{
			cout << "Your answers are correct!\n";
		FileWriter::setSolved(ID, 2);
		}
		else
			count++;
	}
	else
	{
		if (!isControlTest)
		{
			cout << "You are wrong!\n";
			SolutionPrinterRightTriangle::printThirdSolution(results);
		}
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
		if (!isControlTest)
		{
			cout << "Your answers are correct!\n";
		FileWriter::setSolved(ID, 3);
		}
		else
			count++;
	}
	else
	{
		if (!isControlTest)
		{
			cout << "You are wrong!\n";
			SolutionPrinterRightTriangle::printFourthSolution(results);
		}
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
		if (!isControlTest)
		{
			cout << "Your answers are correct!\n";
		FileWriter::setSolved(ID, 4);
		}
		else
			count++;
	}
	else
	{
		if (!isControlTest)
		{
			cout << "You are wrong!\n";
			SolutionPrinterRightTriangle::printFifthSolution(results);
		}
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
		if (!isControlTest)
		{
			cout << "Your answers are correct!\n";
		FileWriter::setSolved(ID, 5);
		}
		else
			count++;
	}
	else
	{
		if (!isControlTest)
		{
			cout << "You are wrong!\n";
			SolutionPrinterTriangle::printFirstSolution(results);
		}
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
		if (!isControlTest)
		{
			cout << "Your answers are correct!\n";
		FileWriter::setSolved(ID, 6);
		}
		else
			count++;
	}
	else
	{
		if (!isControlTest)
		{
			cout << "You are wrong!\n";
			SolutionPrinterTriangle::printSecondSolution(results);
		}
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
		if (!isControlTest)
		{
			cout << "Your answers are correct!\n";
		FileWriter::setSolved(ID, 7);
		}
		else
			count++;
	}
	else
	{
		if (!isControlTest)
		{
			cout << "You are wrong!\n";
			SolutionPrinterTriangle::printThirdSolution(results);
		}
	}
}

void WorkWithTests::controlTest()
{
	vector<int> test;
	count = 0;
	for (int i = 0; i < 8; i++)
		test.push_back(i);
	while (!test.empty())
	{
		int k = rand() % test.size();
		if (test[k] == 0)
			rightTriangleFirst();
		if (test[k] == 1)
			rightTriangleSecond();
		if (test[k] == 2)
			rightTriangleThird();
		if (test[k] == 3)
			rightTriangleFourth();
		if (test[k] == 4)
			rightTriangleFifth();
		if (test[k] == 5)
			arbitraryTriangleFirst();
		if (test[k] == 6)
			arbitraryTriangleSecond();
		if (test[k] == 7)
			arbitraryTriangleThird();
		cout << endl;
		test.erase(test.begin() + k);
	}
	cout << "You have answered: " << count << "/8" << endl << endl;
	system("pause");
}