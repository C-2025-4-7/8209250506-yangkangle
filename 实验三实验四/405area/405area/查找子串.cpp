#include<iostream>
#include<cstring>
using namespace std;
int find(char A[], char a[])
{
	bool found = true;
	int k = 0;
	for (int i = 0; i <= strlen(a) - strlen(A); i++)
	{

		for (int j = 0; j < strlen(A); j++)
		{

			if (a[i + j] != A[j])
			{

				break;
			}
			if (j == strlen(A) - 1)
			{
				return i;
			}


		}

	}
	return -1;
}
int main()
{
	char s1[105], s2[105];
	cin.getline(s1, 105);
	cin.getline(s2, 105);
	cout << find(s1, s2);
	return 0;
}


