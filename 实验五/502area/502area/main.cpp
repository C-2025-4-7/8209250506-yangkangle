#include<iostream>
#include"student.h"
using namespace std;
int main()
{
	Student stud;
	stud.set_value(007, "tcg", 'm');//参数输入的类型是个问题
	stud.display(stud);
	return 0;
}