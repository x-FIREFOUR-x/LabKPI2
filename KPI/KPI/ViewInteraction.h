#pragma once
#include <string>
#include "Profile.h"
using namespace std;
class ViewInteraction
{
public:
	static void startPick(int& choice);
	static void clearScreen();
	static void logIn(string& login, string& password);
	static void profilePick(int& action);
	static Profile createProfi(int profileID, int type);
	static int inputEditing();
	static bool checkIfYouWannaEdit();
	static void inputValue(string str, string& value);
	static bool checkIfYouWannaRewrite(std::string word);
};

