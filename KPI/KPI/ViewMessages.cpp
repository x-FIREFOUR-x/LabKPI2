#include "ViewMessages.h"
#include <string>
#include <iostream>
#include<windows.h>
#include "ViewInteraction.h"

using namespace std;

void ViewMessages::successfulLogOut()
{
	ViewInteraction::clearScreen();
	cout << "You are logged out!" << endl;
}

void ViewMessages::unsuccessfulFileOpening()
{
	ViewInteraction::clearScreen();
	cout << "Can't open a file :-(" << endl;
}

void ViewMessages::successfulProfileDelete()
{
	ViewInteraction::clearScreen();
	cout << "Your profile is deleted!" << endl;
}

void ViewMessages::registrationIsCorrect()
{
	ViewInteraction::clearScreen();
	cout << "Your registration is correct!" << endl;
}

void ViewMessages::unsuccsessfulLogIn() {
	ViewInteraction::clearScreen();
	cout << "Entered incorrect login or password\n";
}

void ViewMessages::succsessfulLogIn() {
	ViewInteraction::clearScreen();
	cout << "Succesfully logined!" << endl;
}

void ViewMessages::successfulEdit()
{
	ViewInteraction::clearScreen();
	cout << "Successfully edited!" << endl;
}

void ViewMessages::notConfirmed()
{
	ViewInteraction::clearScreen();
	cout << "Verification not confirmed." << endl;
}

void ViewMessages::LoginTaken()
{
	ViewInteraction::clearScreen();
	cout << "This login is already taken." << endl;
}

void ViewMessages::verificationConfirmed()
{
	ViewInteraction::clearScreen();
	cout << "Verification confirmed!" << endl;
}

void ViewMessages::ConditionOut(std::string condition)
{
	SetConsoleOutputCP(1251);
	cout << condition << endl;
	SetConsoleOutputCP(866);
}

void ViewMessages::ScoreOut(int* score)
{
	ViewInteraction::clearScreen();
	int sum_right = 0;
	for (int i = 0; i < 5; i++)
	{
		sum_right += score[i];
	}
	
	cout << "Your passed tests is: " <<  endl;
	cout << "Right triangle " << sum_right << "/" << "5" << endl;
	cout << "Three sides " << (int)score[5] << "/" << "1" << endl;
	cout << "Two sides and an angle " << (int)score[6] << "/" << "1" << endl;
	cout << "The side and two angles " << (int)score[7] << "/" << "1" << endl;

}

void ViewMessages::clearProgresSuccesfull()
{
	cout << "Your progress solved tests succesfull clear" << endl;
}
