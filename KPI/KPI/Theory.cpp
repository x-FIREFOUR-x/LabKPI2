#include "Theory.h"
#include <windows.h>

using namespace std;

vector<string> Theory::getInfo(int n)
{
	
	vector<string> result;
	
	ifstream fin("Theory\\" + to_string(n) + ".txt");
	SetConsoleCP(1251);
	while (!fin.eof())
	{
		string s;
		getline(fin, s);
		result.push_back(s + "\n");
	}
	SetConsoleCP(866);
	fin.close();
	return result;
}