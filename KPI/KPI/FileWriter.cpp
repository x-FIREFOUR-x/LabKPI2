#include <fstream>
#include <filesystem>
#include "FileWriter.h"
#include "Profile.h"
#include "ViewInteraction.h"
#include "ViewMessages.h"
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
	ofstream outProfile2("Database/Profiles/Scores/" + std::to_string(profileData.getID()) + ".txt");
	outProfile2 << 0;
	outProfile << profileData.getName() << " " << profileData.getEmail()<< "\n";
	outProfile.close();
	outProfile2.close();

}

void FileWriter::writeLoginData(Profile profileData)
{
	ofstream Accounts("Database/Accounts.txt", ios::app);
	Accounts << profileData.getPassword() << " " << profileData.getLogin() << " " << profileData.getID() << "\n";
	Accounts.close();
}
void FileWriter::upScore(int ID)
{
	int currentScore;
	ifstream inFile("Database/Profiles/Scores/" + std::to_string(ID) + ".txt");
	inFile >> currentScore;
	currentScore++;
	inFile.close();
	ofstream outFile("Database/Profiles/Scores/" + std::to_string(ID) + ".txt", ios::trunc);
	outFile << currentScore;
	outFile.close();
}
void FileWriter::downScore(int ID)
{
	int currentScore;
	ifstream inFile("Database/Profiles/Scores/" + std::to_string(ID) + ".txt");
	inFile >> currentScore;
	currentScore--;
	inFile.close();
	ofstream outFile("Database/Profiles/Scores/" + std::to_string(ID) + ".txt", ios::trunc);
	outFile << currentScore;
	outFile.close();
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
		oldProfile >> name >> email;
		newProfile << newName << " " << email << endl;
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
		oldProfile >> name >> email;
		newProfile << name << " " << newEmail << endl;
		oldProfile.close();
		newProfile.close();
		fs::remove(OldPath);
		rename(NewPath.data(), OldPath.data());
		ViewInteraction::clearScreen();
		ViewMessages::successfulEdit();
	}
}
