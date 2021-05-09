#include "FileWriter.h"
#include "Profile.h"
#include "ViewInteraction.h"
#include "ViewMessages.h"
#include <fstream>
#include <ctime>
#include <filesystem>

using namespace std;
namespace fs = filesystem;

void FileWriter::writeEmptyAccounts()
{
	ofstream accounts("Database/Accounts.txt");
	accounts.close();
}

void FileWriter::rewriteAccounts(int ID)
{
	ifstream oldAccounts("Database/Accounts.txt");
	ofstream newAccounts("Database/NewAccounts.txt");
	if ((oldAccounts.is_open()) && (newAccounts.is_open()))
	{
		while (!oldAccounts.eof())
		{
			string password, login;
			int currentID;
			oldAccounts >> password >> login >> currentID;
			if (currentID != ID)
			{
				newAccounts << password << " " << login << " " << currentID << endl;
			}
		}
		oldAccounts.close();
		newAccounts.close();
		fs::remove("Database/Accounts.txt");
		rename("Database/NewAccounts.txt", "Database/Accounts.txt");
		ViewInteraction::clearScreen();
		ViewMessages::successfulProfileDelete();
	}
}

void FileWriter::writeProfileData(Profile profileData)
{
	ofstream outProfile("Database/Profiles/" + std::to_string(profileData.getID()) + ".txt");
	outProfile << profileData.getName() << " " << profileData.getEmail()<< "\n";
	outProfile.close();

}



void FileWriter::writeLoginData(Profile profileData)
{
	ofstream Accounts("Database/Accounts.txt", ios::app);
	Accounts << profileData.getPassword() << " " << profileData.getLogin() << " " << profileData.getID() << "\n";
	Accounts.close();
}

void FileWriter::clearFileData(string path)
{
	ofstream outFile(path, ios::trunc);
	outFile.close();
}

void FileWriter::editFileLogin(int ID, string oldPassword, string newLogin)
{
	ifstream oldAccounts("Database/Accounts.txt");
	ofstream newAccounts("Database/NewAccounts.txt");
	if ((oldAccounts.is_open()) && (newAccounts.is_open()))
	{
		while (!oldAccounts.eof())
		{
			string password, login;
			int currentID;
			oldAccounts >> password >> login >> currentID;
			if (currentID != ID && login != "")
			{
				newAccounts << password << " " << login << " " << currentID << endl;
			}
		}
		newAccounts << oldPassword << " " << newLogin << " " << ID << endl;
		oldAccounts.close();
		newAccounts.close();
		fs::remove("Database/Accounts.txt");
		rename("Database/NewAccounts.txt", "Database/Accounts.txt");
		ViewInteraction::clearScreen();
		ViewMessages::successfulEdit();
	}
}

void FileWriter::editFilePassword(int ID, string oldLogin, string newPassword)
{
	ifstream oldAccounts("Database/Accounts.txt");
	ofstream newAccounts("Database/NewAccounts.txt");
	if ((oldAccounts.is_open()) && (newAccounts.is_open()))
	{
		while (!oldAccounts.eof())
		{
			string password, login;
			int currentID;
			oldAccounts >> password >> login >> currentID;
			if (currentID != ID && login != "")
			{
				newAccounts << password << " " << login << " " << currentID << endl;
			}
		}
		newAccounts << newPassword << " " << oldLogin << " " << ID << endl;
		oldAccounts.close();
		newAccounts.close();
		fs::remove("Database/Accounts.txt");
		rename("Database/NewAccounts.txt", "Database/Accounts.txt");
		ViewInteraction::clearScreen();
		ViewMessages::successfulEdit();
	}
}

void FileWriter::editFileName(string OldPath, string NewPath, string newName)
{
	ifstream oldProfile(OldPath);
	ofstream newProfile(NewPath);
	if ((oldProfile.is_open()) && (newProfile.is_open()))
	{
		string name, email;
		int type;
		oldProfile >> name >> email >> type;
		newProfile << newName << " " << email << " " << type << endl;
		oldProfile.close();
		newProfile.close();
		fs::remove(OldPath);
		rename(NewPath.data(), OldPath.data());
		ViewInteraction::clearScreen();
		ViewMessages::successfulEdit();
	}
}

void FileWriter::editFileEmail(string OldPath, string NewPath, string newEmail)
{
	ifstream oldProfile(OldPath);
	ofstream newProfile(NewPath);
	if ((oldProfile.is_open()) && (newProfile.is_open()))
	{
		string name, email;
		int type;
		oldProfile >> name >> email >> type;
		newProfile << name << " " << newEmail << " " << type << endl;
		oldProfile.close();
		newProfile.close();
		fs::remove(OldPath);
		rename(NewPath.data(), OldPath.data());
		ViewInteraction::clearScreen();
		ViewMessages::successfulEdit();
	}
}
