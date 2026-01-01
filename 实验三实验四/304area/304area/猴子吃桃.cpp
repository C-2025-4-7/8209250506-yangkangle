#include<iostream>
using namespace std;
//这里就按第十天吃完之后发现有一个桃
int memory(int day)
{
	if (day == 10)
	{
		return 1;
	}
	return (memory(day + 1) + 1) * 2;
}
int main()
{
	cout << "第一天猴子摘了：" << (memory(1)+1 )*2-memory(1)<< endl;
	return 0;
}