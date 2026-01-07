
class Student
{
public:
	void display(Student &);//函数声明加参数类型
	void set_value(int nu,const char na[], char se)//第二个参数的种类
	{
		num = nu;
		for (int i = 0; i < strlen(na); i++)//复制的操作一开始想简单了
		{
			name[i] = na[i];
		}
		name[strlen(na)] = '\0';//不这样操作会乱码
		sex = se;
	}
private:
	int num;
	char name[20];
	char sex;
};
