#include "ViewMessages.h"
#include <string>
#include <iostream>
#include <Windows.h>
#include <locale>

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
	SetConsoleCP(1251);
	//setlocale(0, "ukrainian");
	cout << condition << endl;
	//setlocale(LC_ALL, "english");
    //SetConsoleOutputCP(866);
	//SetConsoleCP(866);
}