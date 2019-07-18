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
	for (int i = 0; i < num - 1; i++)
	{


		for (int j = 0; j < num - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}


	}
	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
	return 0;
}