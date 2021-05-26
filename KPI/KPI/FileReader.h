#include<fstream>
#include<string>
#include"Profile.h"
#pragma once

class FileReader
{
public:
	static Profile readProfile(int ID);
	static int readID(std::string login, std::string password);
	static void readLoginAndPassword(int ID, std::string& login, std::string& password);
	static bool readCheckID(int ID);
	static bool readCheckLogin(std::string login);
	static int* readScore(int ID);
};

