#pragma once
#include <string>

class Validation
{
public:
	static bool EmailCheck(std::string email);
	static bool NameCheck(std::string name, std::string str);
	static bool LoginCheck(std::string login);
	static bool PasswordCheck(std::string password);
	static bool DataEmptyCheck(std::string data, std::string str);
	static bool IDCheck(int ID);
	static bool PickCheck(std::string& choice, int max);
};

