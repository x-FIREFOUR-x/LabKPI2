#include "ApplyTheRegistration.h"
#include "AccountManagement.h"
#include "Validation.h"
#include "ViewInteraction.h"
#include "ViewMessages.h"
#include "FileWriter.h"
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

void ApplyTheRegistration::profileManager()
{
	FileWriter::writeProfileData(profileData);
	FileWriter::writeLoginData(profileData);
}

void ApplyTheRegistration::profileDataCheck()
{
	bool correct = true;
	if (!Validation::NameCheck(profileData.getName(), "name"))
	{
		correct = false;
	}
	if (!Validation::EmailCheck(profileData.getEmail()))
	{
		correct = false;
	}
	if (!Validation::PasswordCheck(profileData.getPassword()))
	{
		correct = false;
	}
	if (!Validation::LoginCheck(profileData.getLogin()))
	{
		correct = false;
	}
	if (correct)
	{
		ViewInteraction::clearScreen();
		ViewMessages::registrationIsCorrect();
		profileManager();
	}
	else
	{
		bool leave = ViewInteraction::checkIfYouWannaRewrite("registration");
		if (!leave)
		{
			ViewInteraction::clearScreen();
			AccountManagement::registerProfile(0);
		}
		else
		{
			ViewInteraction::clearScreen();
		}
	}
}

void ApplyTheRegistration::setProfile(Profile currentProfile)
{
	this->profileData = currentProfile;
}
