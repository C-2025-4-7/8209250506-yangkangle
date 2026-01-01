#include<iostream>
using namespace std;
int find(char A[], char a[])
{
	for (int i = 0; i < sizeof(a) - sizeof(A); i++)
		for (int j = 0; j < sizeof(A); j++)
		{
			bool found = true;
			if (a[i + j] != A[j])
			{
				found = false;
				break;
			}
			if (found) {
				return i;
			}
			return -1;
		}
}
int main()
{
	char s1[105], s2[105];
	cin.getline(s1, 105);
	cin.getline(s2, 105);
	cout<<find(s1, s2);
	return 0;
}


