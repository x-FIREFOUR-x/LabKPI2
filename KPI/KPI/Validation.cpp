#include "Validation.h"
#include "FileReader.h"
#include <iostream>
#include <fstream>

#include "ViewInteraction.h"

using namespace std;

bool Validation::EmailCheck(string email)
{
	bool correct = true;
	int count = 0;
	correct = DataEmptyCheck(email, "email");
	for (int i = 0; i < email.length(); i++)
	{
		if (email[i] == '@')
		{
			count++;
		}
	}
	if (count != 1)
	{
		cout << endl << "Your email either have too many or no @ symbol at all." << endl;
		correct = false;
	}
	return correct;
}

bool Validation::NameCheck(string name, string str)
{
	bool correct = true;
	int count = 0;
	correct = DataEmptyCheck(name, str);
	for (int i = 0; i < name.length(); i++)
	{
		if (!((name[i] >= 65 && name[i] <= 90) || (name[i] >= 97 && name[i] <= 122)))
		{
			if (!(name[i] == ' '))
			{
				cout << endl << "Your " << str << " has been writen wrong or at different language." << endl;
				correct = false;
				i = name.length();
			}
			else if (count == 0)
			{
				cout << endl << "Your " << str << " has space bar at the begining or double space bar." << endl;
				correct = false;
				i = name.length();
			}
			else
			{
				count = -1;
			}
		}
		count += 1;
	}
	return correct;
}

bool Validation::LoginCheck(string login)
{
	bool correct = FileReader::readCheckLogin(login);
	if (login.length() < 4)
	{
		cout << endl << "Your login is too short! It must have at least 4 symbols." << endl;
		correct = false;
	}
	return correct;
}

bool Validation::IDCheck(int ID)
{
	bool correct = FileReader::readCheckID(ID);
	return correct;
}

bool Validation::PasswordCheck(string password)
{
	bool correct = true;
	int count = 0;
	int count2 = 0;
	if (password.length() < 6)
	{
		cout << endl << "Your password is too short! It must have at least 6 symbols." << endl;
		correct = false;
	}
	for (int i = 0; i < password.length(); i++)
	{
		if (password[i] >= 48 && password[i] <= 57)
		{
			count++;
		}
		if ((password[i] >= 65 && password[i] <= 90) || (password[i] >= 97 && password[i] <= 122))
		{
			count2++;
		}
		if (!((password[i] >= 32 && password[i] <= 126)))
		{
			cout << endl << "Your password has been writen at different language." << endl;
			correct = false;
			i = password.length();
		}
	}
	if (count < 1)
	{
		cout << endl << "Your password need to have at least one numeral." << endl;
		correct = false;
	}
	if (count2 < 1)
	{
		cout << endl << "Your password need to have at least one letter." << endl;
		correct = false;
	}
	return correct;
}

bool Validation::DataEmptyCheck(string data, string str)
{
	bool correct = true;
	if (data.empty())
	{
		cout << endl << "Your " << str << " is epmty." << endl;
		correct = false;
	}
	return correct;
}

bool Validation::PickCheck(string& choice, int max)
{
	bool correct = true;
	if (choice.size() > 1)
	{
		for (int k = 0; k < choice.length() - 1; k++) {
			if (choice[k] != '0')correct = false;
		}
	}
	if (choice[choice.length() - 1] < 48 || choice[choice.length() - 1] > 57)
	{
		correct = false;
	}
	else
	{
		for (int i = 0; i <= max; i++)
		{
			if (stoi(choice) == i)
			{
				return correct;
			}
		}
		correct = false;
	}
	ViewInteraction::clearScreen();
	cout << "You entered wrong value! Please try again:" << endl;
	return correct;
}

bool Validation::CheckFloat(std::string& floatStr)
{
	while (floatStr.find(',') != string::npos)
	{
		floatStr[floatStr.find(',')] = '.';
	}
	bool correct = true;
	int cntPoints = 0;
	for (int i = 0; i < floatStr.length(); i++)
	{
		if ((floatStr[i] > 48 && floatStr[i] < 57) || floatStr[i] == '.')
		{
			if (floatStr[i] == '.')
			{
				cntPoints++;
			}
			if (cntPoints > 1)
			{
				cout << "You entered too many '.' symbols! Please try again:" << endl;
				return false;
			}
		}
		else
		{
			cout << "You entered wrong value! Please try again:" << endl;
			return false;
		}
	}
	return true;
}
