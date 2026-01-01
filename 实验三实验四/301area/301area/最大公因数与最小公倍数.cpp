#include <iostream>
using namespace std;
void biggest(int &m, int &n)
{
	for (int i = min(m, n); i > 0; i--)
	{
		if (m % i == 0 && n % i == 0)
		{
			cout << "最大公因数为：" << i << endl;
			break;
		}
	}
}
void smallest(int &m, int &n)
{
	for (int i = max(m, n); i > 0; i++)
	{
		if (i % m == 0 && i % n == 0)
		{
			cout << "最小公倍数：" << i << endl;
			break;
		}
	}
}
int main()
{
	int a, b;
	cin >> a >> b;
	biggest(a, b);
	smallest(a, b);
	return 0;

}
