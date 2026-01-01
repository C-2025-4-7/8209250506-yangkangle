#include<iostream>
#include<cstring>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	for (int i = 0; i < strlen(s1); i++)
	{
		for (int j = 0; j < strlen(s2); j++)
		{
			if (s2[j] != s1[i + j])
			{
				break;
			}
			if (j == strlen(s2)-1)
			{
				return i;
			}
		}
	}
	return -1;
}
int main()
{
	const char* s1;
	char l1[100];
	cout << "ÊäÈëÄ¸Á´:";
	cin.getline(l1, 100);
	s1 = l1;
	cout << "ÊäÈë×ÓÁ´£º";
	const char* s2;
	char l2[100];
	cin.getline(l2, 100);
	s2 = l2;
	cout << indexof(s1, s2);
	return 0;
}