#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int Min = min(a, b);
	int Max = max(a, b);
	for (int i = Min; i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			cout << "最大公约数为" << i << endl;
			break;
		}
	}
	for (int i = Max; i > 0; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			cout << "最小公倍数为" << i << endl;
			break;
		}
	}
	return 0;

}