#include<iostream>
#include"mytemperature.h"
#include<iomanip>
using namespace std;
double celsius_to_fah(double cel)
{
	cout << fixed << setprecision(1) << cel * 9 / 5 + 32 << endl;
	return cel * 9 / 5 + 32;
}
double fah_to_celsius(double fah)
{
	cout << fixed<<setprecision(1)<<(fah - 32) / 1.8 << endl;
	return (fah - 32) / 1.8;
}
int main()
{
	double fah;
	cout << "输入华氏温度：";
	cin >> fah;
	fah_to_celsius(fah);
	double cel;
	cout << "输入摄氏温度：";
	cin >> cel;
	celsius_to_fah(cel);
	return 0;
}
