#include "Theory.h"

using namespace std;

vector<string> Theory::getInfo(int n)
{
	vector<string> result;
	ifstream fin("Database\\Theory\\" + to_string(n) + ".txt");
	while (!fin.eof())
	{
		string s;
		getline(fin, s);
		result.push_back(s + "\n");
	}
	fin.close();
	return result;
}