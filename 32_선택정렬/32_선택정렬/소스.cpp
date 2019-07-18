#include<iostream>
using namespace std;

int main(void) {
	int num = 0;
	scanf("%d", &num);
	int* arr = new int[num];
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < num; i++)
	{
		int min = arr[i];
		int index = i;
		for (int j = i; j < num; j++)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				index = j;
			}
		}
		if (index != i)
		{
			swap(arr[i], arr[index]);
		}
	}
	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
	return 0;
}