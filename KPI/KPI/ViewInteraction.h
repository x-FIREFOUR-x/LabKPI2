#pragma once
#include <string>
#include <vector>

#include "Profile.h"

class ViewInteraction
{
public:
	static void startPick(int& choice);
	static void clearScreen();
	static void logIn(std::string& login, std::string& password);
	static void profilePick(int& action);
	static Profile createProfile(int profileID);
	static int inputEditing();
	static bool checkIfYouWannaEdit();
	static void inputValue(std::string str, std::string& value);
	static bool checkIfYouWannaRewrite(std::string word);
	static void confirmation(std::string& confirmation);
	static void getTypeOfTest(int& choice);
	//static void readTestAnswers(std::vector<std::string>);
};

