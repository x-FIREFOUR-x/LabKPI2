#include <string>
#include <iostream>
#include <windows.h>
#include "ViewInteraction.h"
#include "Validation.h"

using namespace std;

void ViewInteraction::startPick(int& choice) {
	string choice1;
	do
	{
		cout << "(0)Login\n(1)Register\n(2)Quit:\n";
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, choice1);
	} while (!Validation::PickCheck(choice1, 2));
	choice = stoi(choice1);
}

void ViewInteraction::clearScreen()
{
	system("cls");
}

void ViewInteraction::logIn(string& login, string& password) {
	cout << "Enter your login:\n";
	cin >> login;
	cout << "Enter your password:\n";
	cin >> password;
}

void ViewInteraction::profilePick(int& action) {
	string action1;
	do
	{
		cout << "(0)Check theory\n(1)Do tests\n(2)Check your score\n(3)Edit your profile\n(4)Delete your profile\n(5)Log out:" << endl;
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, action1);
	} while (!Validation::PickCheck(action1, 5));
	action = stoi(action1);
}

Profile ViewInteraction::createProfile(int profileID)
{
	string login, password, name, email;
	cout << "Enter your login:\n";
	cin >> login;
	cout << "Enter your password:\n";
	cin >> password;
	cout << "Enter your name:\n";
	cin >> name;
	cout << "Enter your email:\n";
	cin >> email;
	Profile newProfile(name, email, login, password, profileID);
	return newProfile;
}

int ViewInteraction::inputEditing()
{
	clearScreen();
	cout << "What do you want to edit?\n";
	string typeOfEditing1;
	int typeOfEditing;
	do
	{
		cout << "(0)Login\n(1)Password\n(2)Name\n(3)Email" << endl;
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, typeOfEditing1);
	} while (!Validation::PickCheck(typeOfEditing1, 3));
	typeOfEditing = stoi(typeOfEditing1);
	return typeOfEditing;
}

bool ViewInteraction::checkIfYouWannaEdit()
{
	string leave1;
	bool leave;
	do
	{
		cout << endl << "Would you like to edit something else(0) or leave(1)?" << endl;
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, leave1);
	} while (!Validation::PickCheck(leave1, 1));
	clearScreen();
	leave = stoi(leave1);
	return leave;
}

void ViewInteraction::inputValue(string str, string& value)
{
	cout << endl << str << endl;
	cin >> value;
}

bool ViewInteraction::checkIfYouWannaRewrite(string word) {
	bool leave;
	string leave1;
	do
	{
		cout << "Would you like to rewrite your " << word << "(0) or leave(1)?" << endl;
		if (cin.peek() == '\n') {
			cin.ignore();
		}
		getline(cin, leave1);
	} while (!Validation::PickCheck(leave1, 1));
	leave = stoi(leave1);
	return leave;
}

void ViewInteraction::confirmation(string& confirmation) {
	cout << "Are you sure?\n(0)Confirm\n(Any key)No\n";
	cin >> confirmation;
}

void ViewInteraction::showTheory()
{
	clearScreen();
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	//cout << "дороророр" << endl;
	vector<string> str;
	str = Theory::getInfo(0);
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i];
	}
	cout << endl;
	cout << "Choose a section: ";
	int n;
	cin >> n;
	str.clear();
	clearScreen();
	str = Theory::getInfo(n);
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i];
	}
	cout << endl;
	if (n > 1)
		cout << "(0)Previous page\n";
	if (n < 11)
		cout << "(1)Next page\n";
	cout << "(2)Close\n";
	int operation;
	cin >> operation;
	
	
	if (operation == 0)
	{
		showTheory(n - 1);
	}
	if (operation == 1)
	{
		showTheory(n + 1);
	}
	if (operation == 2)
	{
		clearScreen();
	}
	
	SetConsoleOutputCP(866);
	SetConsoleCP(866);
}

void ViewInteraction::showTheory(int n)
{
	clearScreen();
	SetConsoleOutputCP(1251);
	vector<string> str;
	str = Theory::getInfo(n);
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i];
	}
	cout << endl;
	if (n > 1)
		cout << "(0)Previous page\n";
	if (n < 11)
		cout << "(1)Next page\n";
	cout << "(2)Close\n";
	int operation;
	cin >> operation;
	SetConsoleOutputCP(866);
	if (operation == 0)
	{
		showTheory(n - 1);
	}
	if (operation == 1)
	{
		showTheory(n + 1);
	}
	if (operation == 2)
	{
		clearScreen();
	}
}