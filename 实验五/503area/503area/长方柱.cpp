#include<iostream>
using namespace std;
class column
{
private:
	int length;
	int width;
	int height;
public:
	void cindata(column &x)
	{
		cin >> x.length;
		cin >> x.width;
		cin >> x.height;
	}
	void calculate(column x)
	{
		int V = x.length * x.width * x.height;
	}
	void showV(column x)
	{
		cout<<"长方体的体积为："<< x.length * x.width * x.height;
	}
};
int main()
{
	column x1;
	x1.cindata(x1);
	x1.calculate(x1);
	x1.showV(x1);
	return 0;
}