#include "SiteInterface.h"
#include "ViewInteraction.h"
#include "ViewMessages.h"
#include "AccountManagement.h"
#include "FileReader.h"
#include "Profile.h"
#include "FileWriter.h"
#include "WorkWithTests.h"
#include "ExerciseRightTriangle.h"
#include <filesystem>
#include <ctime>
#include <string>
#include <vector>
#include <iostream>

using namespace std;
namespace fs = filesystem;

void SiteInterface::createDefaultFiles()
{
	srand(time(NULL));
	string fileNames[3] = { "Database","Database/Profiles","Database/Profiles/Scores" };
	for (int i = 0; i < 3; i++)
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
					ViewInteraction::showTheory();
				}
				else if (action == 1)
				{
					int testChoice;
					bool control = false;
					ViewInteraction::getTypeOfTest(testChoice);
					WorkWithTests tests(current.getID(), control);
					if (testChoice == 0)
					{
						int testRightChoice = 0;
						ViewInteraction::clearScreen();
						do{
							ViewInteraction::getTypeOfTestRight(testRightChoice);
							ViewInteraction::clearScreen();
							if (testRightChoice == 0) {
								tests.rightTriangleFirst();
							}
							else if (testRightChoice == 1) {
								tests.rightTriangleSecond();
							}
							else if (testRightChoice == 2) {
								tests.rightTriangleThird();
							}
							else if (testRightChoice == 3) {
								tests.rightTriangleFourth();
							}
							else if (testRightChoice == 4) {

								tests.rightTriangleFifth();
							}
						} while (testRightChoice != 5);
					}
					else if (testChoice == 1)
					{
						tests.arbitraryTriangleFirst();
					}
					else if (testChoice == 2)
					{
						tests.arbitraryTriangleSecond();
					}
					else if (testChoice == 3)
					{
						tests.arbitraryTriangleThird();
					}
					else if (testChoice == 4)
					{
						tests.setIsControlTest(true);
						tests.controlTest();
					}

				}
				else if (action == 2)
				{
					int* currentScore = FileReader::readScore(ID);
					ViewMessages::ScoreOut(currentScore);
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
						action = 6;
						profileIsDeleted = true;
					}
					else
					{
						ViewInteraction::clearScreen();
					}
				}
				else if (action == 5)
				{
					FileWriter::clearResultTests(ID);
					ViewMessages::clearProgresSuccesfull();
				}
			} while (action != 6);
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