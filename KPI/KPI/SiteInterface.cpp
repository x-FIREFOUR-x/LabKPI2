#include "SiteInterface.h"
#include "ViewInteraction.h"
#include "ViewMessages.h"
#include "AccountManagement.h"
#include "FileReader.h"
#include "Profile.h"
#include "FileWriter.h"
#include "WorkWithTests.h"
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
		case 0:
		{
			string login, password;
			ViewInteraction::logIn(login, password);
			ViewInteraction::clearScreen();
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
				if (action == 0)
				{

				}
				else if (action == 1)
				{
					int testChoice;
					ViewInteraction::getTypeOfTest(testChoice);
					WorkWithTests tests;
					if(testChoice==0)
					{
						tests.testsWithRightTriangle();
					}
					else if(testChoice==1)
					{
						
					}
					else if(testChoice==2)
					{
						
					}

				}
				else if (action == 2)
				{

				}
				else if (action == 3)
				{
					AccountManagement::editProfile(ID);
				}
				else if (action == 4)
				{
					string confirmation;
					ViewInteraction::confirmation(confirmation);
					if (confirmation == "0")
					{
						AccountManagement::deleteProfile(ID);
						action = 5;
						profileIsDeleted = true;
					}
					else
					{
						ViewInteraction::clearScreen();
					}
				}
			} while (action != 5);
			if (!profileIsDeleted)
			{
				ViewInteraction::clearScreen();
				AccountManagement::exitFromProfile(ID);
			}
		}
			  break;
		case 1:
			AccountManagement::registerProfile();
			break;
		}
	} while (choice != 2);
}