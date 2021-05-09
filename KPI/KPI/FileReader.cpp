#include "FileReader.h"
#include "ViewMessages.h"
#include "Profile.h"
Profile FileReader::readProfile(int ID)
{
	ifstream fileProfile("Database/Profiles/" + to_string(ID) + ".txt");
	string name, email;
	int type;
	fileProfile >> name >> email >> type;
	Profile currentProfile;
	currentProfile.setEmail(email);
	currentProfile.setName(name);
	currentProfile.setID(ID);
	return currentProfile;
}
int FileReader::readID(string login, string password)
{
	int ID = -1;
	ifstream inFile("Database/Accounts.txt");
	if (!inFile) {
		ViewMessages::unsuccessfulFileOpening();
	}
	else {
		while (!inFile.eof()) {
			string tempPassword;
			string tempLogin;
			int tempID;
			inFile >> tempPassword;
			inFile >> tempLogin;
			inFile >> tempID;
			if (tempPassword == password && tempLogin == login) {
				ID = tempID;
			}
		}
	}
	inFile.close();
	return ID;
}
void FileReader::readLoginAndPassword(int ID, string& login, string& password)
{
	ifstream inFile("Database/Accounts.txt");
	if (!inFile) {
		ViewMessages::unsuccessfulFileOpening();
	}
	else {
		while (!inFile.eof()) {
			string tempPassword;
			string tempLogin;
			int tempID = 0;
			inFile >> tempPassword;
			inFile >> tempLogin;
			inFile >> tempID;
			if (ID == tempID) {
				login = tempLogin;
				password = tempPassword;
			}
		}
	}
	inFile.close();
}
bool FileReader::readCheckID(int ID)
{
	bool correct = true;
	ifstream inFile("Database/Accounts.txt");
	if (!inFile) {
		ViewMessages::unsuccessfulFileOpening();
		correct = false;
	}
	else {
		while (!inFile.eof())
		{
			int tempID;
			string buffer;
			inFile >> buffer;
			inFile >> buffer;
			inFile >> tempID;
			if (tempID == ID)
			{
				correct = false;
			}
		}
	}
	inFile.close();
	return correct;
}
bool FileReader::readCheckLogin(string login)
{
	bool correct = true;
	ifstream inFile("Database/Accounts.txt");
	if (!inFile) {
		ViewMessages::unsuccessfulFileOpening();
		correct = false;
	}
	else {
		while (!inFile.eof())
		{
			string tempLogin;
			string buffer;
			inFile >> buffer;
			inFile >> tempLogin;
			inFile >> buffer;
			if (tempLogin == login)
			{
				ViewMessages::LoginTaken();
				correct = false;
			}
		}
	}
	inFile.close();
	return correct;
}
