#include<iostream>
using namespace std;
class Student
{
	
public:
	int num;
	int score;
	Student(int n, int s)
	{
		num = n;
		score = s;
	};//用于对象数组中的各个对象的初始化
};
//注意这里还有一个函数
void Max(Student* arr, int n)//指针何意味
{
	int maxn = arr->num;//方式与指针的意义在哪里
	int maxs = arr->score;
	for (int i = 1; i < n; i++)
	{
		if ((arr + i)->score > maxs)
		{
			maxs = (arr + i)->score;
			maxn = (arr + i)->num;
		}
	}
	cout << maxn;
}
int main()
{
	Student stuarr[5] = { Student(1,95),Student(2,96),Student(3,97), Student(4,98), Student(5,99) };
	Max(stuarr, 5);
	return 0;
}