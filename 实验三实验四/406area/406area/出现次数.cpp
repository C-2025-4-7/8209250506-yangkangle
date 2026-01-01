#include<iostream>
#include <string>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0; i < sizeof(s); i++)
	{
		switch (s[i])
		{
		case 'a':case'A':counts[0]++;break;
		case 'b':case'B':counts[1]++;break;
		case 'c':case'C':counts[2]++;break;
		case 'd':case'D':counts[3]++;break;
		case 'e':case'E':counts[4]++;break;
		case 'f':case'F':counts[5]++; break;
		case 'g':case'G':counts[6]++;break;
		case 'h':case'H':counts[7]++;break;
		case 'i':case'I':counts[8]++;break;
		case 'j':case'J':counts[9]++;break;
		case 'k':case'K':counts[10]++;break;
		case 'l':case'L':counts[11]++;break;
		case 'm':case'M':counts[12]++;break;
		case 'n':case'N':counts[13]++;break;
		case 'o':case'O':counts[14]++;break;
		case 'p':case'P':counts[15]++;break;
		case 'q':case'Q':counts[16]++;break;
		case 'r':case'R':counts[17]++;break;
		case 's':case'S':counts[18]++;break;
		case 't':case'T':counts[19]++;break;
		case 'u':case'U':counts[20]++;break;
		case 'v':case'V':counts[21]++;break;
		case 'w':case'W':counts[22]++;break;
		case 'x':case'X':counts[23]++;break;
		case 'y':case'Y':counts[24]++;break;
		case 'z':case'Z':counts[25]++;break;
		}
	}
}
int main()
{
	char s[100];
	int counts[26] = {0};
	cout << "请输入：" << endl;
	cin.getline(s, 100);
	count(s, counts);
	cout << "a的次数：" << counts[0] << endl;
	cout << "b的次数：" << counts[1] << endl;
	cout << "c的次数：" << counts[2] << endl;
	cout << "d的次数：" << counts[3] << endl;
	cout << "e的次数：" << counts[4] << endl;
	cout << "f的次数：" << counts[5] << endl;
	cout << "g的次数：" << counts[6] << endl;
	cout << "h的次数：" << counts[7] << endl;
	cout << "i的次数：" << counts[8] << endl;
	cout << "j的次数：" << counts[9] << endl;
	cout << "k的次数：" << counts[10] << endl;
	cout << "l的次数：" << counts[11] << endl;
	cout << "m的次数：" << counts[12] << endl;
	cout << "n的次数：" << counts[13] << endl;
	cout << "o的次数：" << counts[14] << endl;
	cout << "p的次数：" << counts[15] << endl;
	cout << "q的次数：" << counts[16] << endl;
	cout << "r的次数：" << counts[17] << endl;
	cout << "s的次数：" << counts[18] << endl;
	cout << "t的次数：" << counts[19] << endl;
	cout << "u的次数：" << counts[20] << endl;
	cout << "v的次数：" << counts[21] << endl;
	cout << "w的次数：" << counts[22] << endl;
	cout << "x的次数：" << counts[23] << endl;
	cout << "y的次数：" << counts[24] << endl;
	cout << "z的次数：" << counts[25] << endl;	

}