#include<iostream>
#include<cmath>
using namespace std;
int parseHex(const char* const hexString)
{
	int sum=0;
	for (int i = 0; i < strlen(hexString);i++)
	{
		char c = hexString[i];
		int dit;
		if (c <= '9' && c >= '0')
		{
			dit = c - '0';
		}
		else if (c >= 'A' && c <= 'Z')
		{
			dit = 10 + (c - 'A');
		}
		else
		{
			cout << "非十六进制" << endl;
			return -1;
		}
		sum = sum + dit * pow(16, strlen(hexString) - 1 - i);
	}
	return sum;
}
int main()
{ 
	char ex[100];
	cout << "输入：";
	cin >> ex;
	cout<<parseHex(ex);
}