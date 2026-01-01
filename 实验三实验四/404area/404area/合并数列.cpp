#include<iostream>
#include<limits>
#define MAX 80
using namespace std;
void merge(int list1[], int size1, int list2[], int size2, int list3[])
{
	int k = 0;
	for (int i = 0; i < size1; i++)
	{
		list3[k++] = list1[i];
	}
	for (int j = 0; j < size2; j++)
	{
		list3[k++] = list2[j];
	}
}
void bubble(int arr[],int len)
{
	for (int i = len-1; i > 0; i--)
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
}
int main()
{
	int list1[MAX];
	int count1 = 0;
	for (int i = 0; i < MAX; i++)
	{

		int num = 0;
		cin >> num;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			break;

		}
		list1[i] = num;
		count1++;
	}
	
	int list2[MAX];
	int count2 = 0;
	for (int i = 0; i < MAX; i++)
	{
		int num = 0;
		cin >> num;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			break;
		}
		list2[i] = num;
		count2++;
	}
	int list3[160];
	merge(list1,count1 , list2, count2, list3);
	bubble(list3, count1+count2);
	for (int i = 0; i < count1 + count2; i++)
	{
		cout << list3[i] << " ";
	}
	return 0;
}