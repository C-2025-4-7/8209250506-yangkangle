#include<iostream>
using namespace std;
int main()
{
	const int n = 100;
	bool arr[n];
	for (int i = 0; i < 100; i++)
	{
		arr[i] = 1;
	}
	for(int i=0;i<100;i++)
		for (int j = 2; j < 101; j++)
		{
			if ((i+1) % j == 0)
				arr[i] = !arr[i];
		}
	for (int i = 0; i < 100; i++)
	{
		if (arr[i] == 1)
		{
			cout << i + 1 << " ";
		}
	}
	return 0;
}