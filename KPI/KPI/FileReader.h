#pragma once
#include<fstream>
#include"Profile.h"
#include<string>
using namespace std;
class FileReader
{
public:
	static Profile readProfile(int ID);
	static int readID(string login, string password);
	static void readLoginAndPassword(int ID, std::string& login, std::string& password);
	static bool readCheckID(int ID);
	static bool readCheckLogin(string login);
};

