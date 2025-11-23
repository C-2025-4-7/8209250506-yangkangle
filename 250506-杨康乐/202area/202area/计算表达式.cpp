#include <iostream>
using namespace std;
int main()
{
	int x;
	float y;
	cin >> x;
	if (x > 0 && x < 10)
		if (x < 1)
			y = 3 - 2 * x;
		else if (x >= 5)
			y = x * x;
		else
			y = (2 / 4 * x) + 1;
	cout << y << endl;
	return 0;	
}