#include "Profile.h"

using namespace std;

Profile::Profile(string name, string email, string login, string password, int ID) :
	name(name), email(email), profileID(ID), login(login), password(password)
{}

string Profile::getName() const
{
	return name;
}

string Profile::getEmail() const
{
	return email;
}

string Profile::getLogin() const
{
	return login;
}

string Profile::getPassword() const
{
	return password;
}

int Profile::getID()
{
	return profileID;
}

void Profile::setName(const string& name)
{
	this->name = name;
}

void Profile::setEmail(const string& email)
{
	this->email = email;
}

void Profile::setID(int ID)
{
	profileID = ID;
}
