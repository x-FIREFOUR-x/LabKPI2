#pragma once
#include "Profile.h"

class FileWriter
{
public:
	static void writeEmptyAccounts();
	static void rewriteAccounts(int ID);
	static void writeProfileData(Profile profileData);
	static void writeLoginData(Profile profileData);
	static void clearFileData(std::string path);
	static void editFileLogin(int ID, std::string oldPassword, std::string newLogin);
	static void editFilePassword(int ID, std::string oldLogin, std::string newPassword);
	static void editFileName(std::string oldPath, std::string newPath, std::string newName);
	static void editFileEmail(std::string oldPath, std::string newPath, std::string newEmail);
};

