#pragma once
#include <string>

class ViewMessages
{
public:
	static void successfulLogOut();
	static void unsuccessfulFileOpening();
	static void successfulProfileDelete();
	static void registrationIsCorrect();
	static void successfulEdit();
	static void notConfirmed();
	static void unsuccsessfulLogIn();
	static void succsessfulLogIn();
	static void LoginTaken();
	static void verificationConfirmed();
	static void ConditionOut(std::string);
};

