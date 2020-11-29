#include <iostream>
#include <string>

using namespace std;

string BracketKiller(string s)
{
	int k = 0;
	for (int i = 0; i <= s.length(); i++)
	{
		if (s[i] == '(')
		{
			while (s[i] != ')')
			{
				s.erase(i, 1);
				if (s[i] == '(')
				{
					return "Error";
					break;
				}
			}
			s.erase(i, 1);
		}
	}
	return s;
}
int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << "String without brackets: " << BracketKiller(str) << endl;
	system("break");
	return 0;
}