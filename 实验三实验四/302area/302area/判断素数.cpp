#include <iostream>
using namespace std;
bool is_prime(int num)
{
	for (int i = num - 1; i > 1; i--)
	{
		if(num<=0)
		{
			return false;
		}
		if(num%i==0)
		{ 
			return false;
		}
	}
	return true;
}
int main()
{
	int num;
	cout << "请输入一个数：";
	cin >> num;
	if (is_prime(num) == 1)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	int count = 0;
	for (int i = 2; i >0; i++)
	{
		
		if (is_prime(i) == 1)
		{
			cout << i<<" ";
			count++;
			if (count % 10 == 0)
			{
				cout << endl;
			}
			if (count == 200)
			{
				break;
			}
		}
		
	}
	return 0;
}