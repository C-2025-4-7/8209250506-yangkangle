#include<iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	void setPoint(int i, int j)
	{
		x = x + i;
		y = y + j;
	}
	void display(Point p)
	{
		cout << "(" << p.x << ',' << p.y << ")";
	}
	Point(int a, int b)
	{
		x = a;
		y = b;
	}
};
int main()
{
	Point p1(60, 80);
	p1.setPoint(7, 8);
	p1.display(p1);
	return 0;
}
