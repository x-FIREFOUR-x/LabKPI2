#include "ViewMessages.h"
#include <string>
#include <iostream>
#include<windows.h>

using namespace std;

void ViewMessages::successfulLogOut()
{
	cout << "You are logged out!" << endl;
}

void ViewMessages::unsuccessfulFileOpening()
{
	cout << "Can't open a file :-(" << endl;
}

void ViewMessages::successfulProfileDelete()
{
	cout << "Your profile is deleted!" << endl;
}

void ViewMessages::registrationIsCorrect()
{
	cout << "Your registration is correct!" << endl;
}

void ViewMessages::unsuccsessfulLogIn() {
	cout << "Entered incorrect login or password\n";
}

void ViewMessages::succsessfulLogIn() {
	cout << "Succesfully logined!" << endl;
}

void ViewMessages::successfulEdit()
{
	cout << "Successfully edited!" << endl;
}

void ViewMessages::notConfirmed()
{
	cout << "Verification not confirmed." << endl;
}

void ViewMessages::LoginTaken()
{
	cout << "This login is already taken." << endl;
}

void ViewMessages::verificationConfirmed()
{
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
