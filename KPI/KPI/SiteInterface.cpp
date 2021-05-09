#include "SiteInterface.h"
#include "FileWriter.h"
#include <filesystem>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;
namespace fs = filesystem;
void SiteInterface::createDefaultFiles()
{
	srand(time(NULL));
	string fileNames[2] = { "Database","Database/Profiles" };
	for (int i = 0; i < 2; i++)
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
