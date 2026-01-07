#include<iostream>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int sec;
public:
	void cintime(Time &t)
	{
		cin >> t.hour;
		cin >> t.minute;
		cin >> t.sec;
	}
	void showtime(Time &t)
	{
		cout << t.hour << ":" << t.minute << ":" << t.sec << endl;
	}
};
int main()
{
	Time t1;
	t1.cintime(t1);
	t1.showtime(t1);
	return 0;
}
//加入&才能改变t1,实现初始化