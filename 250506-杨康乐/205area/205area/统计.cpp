#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	int a[4] = { 0,0,0,0 };
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
			a[0]++;
		else if (s[i] == ' ')
			a[1]++;
		else if (s[i] >= '0' && s[i] <= '9')
			a[2]++;
		else
			a[3]++;
	}
	for (int i = 0; i < 4; i++)
		cout << a[i] << " " ;
	return 0;
}