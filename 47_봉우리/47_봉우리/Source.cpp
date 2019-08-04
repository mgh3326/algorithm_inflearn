#include<iostream>
using namespace std;
int main(void) {
	int num = 0;
	scanf("%d", &num);
	int rowCount = num;
	int colCount = num;
	int** arr = new int* [rowCount];
	for (int i = 0; i < rowCount; ++i)
		arr[i] = new int[colCount];
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int count = 0;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if (
				((i + 1) == num || (arr[i][j] - arr[i + 1][j] > 0)) &&
				(((i - 1) < 0 || ((arr[i][j] - arr[i - 1][j] > 0)))) &&
				((j + 1) == num || (arr[i][j] - arr[i][j + 1] > 0)) &&
				(((j - 1) < 0 || (arr[i][j] - arr[i][j - 1] > 0)))
				)
			{
				count++;
			}
		}
	}
	cout << count << endl;
	return 0;
}