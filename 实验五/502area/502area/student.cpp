#include <iostream>
#include"student.h"
#include<iomanip>
using namespace std;
void Student::display(Student& stu)//对于函数定义的补充
{
	cout << "num:" <<setw(3)<<setfill('0') << num << endl;//保证输出007的方法
	cout << "name:"<<name<<endl;
	cout << "sex:" << sex << endl;
}