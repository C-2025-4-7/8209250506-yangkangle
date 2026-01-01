#include <iostream>
using namespace std;
void bubble(double arr[])
{
	for(int i=9;i>0;i--)
		for (int j = 0; j < i  ; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				double temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
}
int main()
{
	const int n = 10;
	double arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	bubble(arr);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}