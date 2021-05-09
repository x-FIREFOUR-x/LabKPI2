#include "FileWriter.h"
#include <fstream>
using namespace std;
void FileWriter::writeEmptyAccounts()
{
	ofstream accounts("Database/Accounts.txt");
	accounts.close();
}