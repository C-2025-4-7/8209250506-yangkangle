#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	float C;
	float MAX = max(max(a, b), c);
	if (a + b + c - MAX > MAX)
	{
		C = a + b + c;
		cout << "三角形的周长是：" << C << endl;
		if (a == b || b == c || c == a)
			cout << "三角形是等腰三角形" << endl;
		else
			cout << "三角形不是等腰三角形" << endl;
	}
	else
	{
		cout << "不是三角形" << endl;
	}
	return 0;
}