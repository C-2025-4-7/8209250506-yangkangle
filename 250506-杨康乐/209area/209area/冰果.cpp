#include<iostream> 
using namespace std;
int main()
{
	int a = 0, num = 2, c = 0;
	while (num <= 100)
	{
		a += num;
		c++, num *= 2;
	}
	cout << num * 0.8 / c;
	return 0;
}
