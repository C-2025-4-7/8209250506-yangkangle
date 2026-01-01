#include<iostream>
using namespace std;
void bubble(double *arr,int n)
{
	for (int i = 0; i <n; i++)
		for (int j = 0; j <n-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
					double temp = *(arr+j);
					*(arr+j) = *(arr+j + 1);
					*(arr+j + 1) = temp;
			}
		}
}
int main()
{
	int n;
	cout << "请输入数组元素个数：" ;
	cin >> n;
	double* arr = new double[n];
	cout << "输入数组：";
	for (int i = 0; i < n; i++)
	{
		cin >> *(arr + i);
	}
	bubble(arr, n);
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << " ";
	}
	return 0;
}
