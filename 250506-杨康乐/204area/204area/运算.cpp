#include<iostream>
using namespace std;
int main()
{
	int a, b;
	char c;
	cin >> a >> c >> b;
	if (c == '+')
		cout << a + b << endl;
	else if (c == '-')
		cout << a - b << endl;
	else if (c == '*')
		cout << a * b << endl;
	else if (c == '/')
		    if (b != 0)
				cout << a / b << endl;
			else
				cout << "除数为0" << endl;
	else if (c == '%')
			if (b != 0)
				cout << a % b << endl;
			else
				cout << "除数为0" << endl;
	else
		cout << "运算符非法" << endl;
	return 0;
}