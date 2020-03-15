#include <iostream>
#include <string>
using namespace std;

string sortAscendingRow(string str)
{
	char k;
	for (int j = 0; j < str.size(); j++)
	{
		for (int i = 0; i < str.size() - 1; i++)
		{
			if (str[i] > str[i + 1])
			{
				k = str[i];
				str[i] = str[i + 1];
				str[i + 1] = k;
			}
		}
	}
	return str;
}
string removingDuplicateChar(string str)
{
	string s;
	char ch = str[0];
	s.push_back(ch);
	for (int i = 1; i < str.size(); i++)
	{
		if (str[i] != str[i - 1])
		{
			ch = str[i];
			s.push_back(ch);
		}
	}
	return s;
}
int	main()
{
	string st_a, st_b;
	cin >> st_a;
	st_b = sortAscendingRow(st_a);
	st_a.clear();
	st_a = removingDuplicateChar(st_b);
	cout << st_a[0];
	for (int i = 1; i < st_a.size(); i++) cout << " " << st_a[i];
	return 0;
}
