#include "SiteInterface.h"
#include "ViewInteraction.h"
#include "ViewMessages.h"
#include "AccountManagement.h"
#include "FileReader.h"
#include "Profile.h"
#include "FileWriter.h"
#include <filesystem>
#include <ctime>
#include <string>

using namespace std;
namespace fs = filesystem;

void SiteInterface::createDefaultFiles()
{
	srand(time(NULL));
	string fileNames[2] = { "Database","Database/Profiles" };
	for (int i = 0; i < 2; i++)
	{
		if (fs::is_directory(fileNames[i]) == false)
		{
			fs::create_directory(fileNames[i]);
		}
	}
	if (!fs::is_regular_file("Database/Accounts.txt"))
	{
		FileWriter::writeEmptyAccounts();
	}
}
void SiteInterface::showMenu()
{
	int choice;
	do
	{
		ViewInteraction::startPick(choice);
		ViewInteraction::clearScreen();
		switch (choice)
		{
		case 0: {
			string login, password;
			ViewInteraction::logIn(login, password);
			ViewInteraction::clearScreen();
			{
				int ID = AccountManagement::enterToProfile(login, password);
				if (ID == -1) {
					ViewMessages::unsuccsessfulLogIn();
					continue;
				}
				ViewMessages::succsessfulLogIn();
				Profile current = FileReader::readProfile(ID);
					int action;
					bool profileIsDeleted = false;
					do
					{
						ViewInteraction::profilePick(action);
						ViewInteraction::clearScreen();
					} while (action != 3);
					if (!profileIsDeleted)
					{
						ViewInteraction::clearScreen();
						AccountManagement::exitFromProfile(ID);
					}
			}
		}
			  break;
		case 1:
			AccountManagement::registerProfile(0);
			break;
		}
	} while (choice != 2);
}