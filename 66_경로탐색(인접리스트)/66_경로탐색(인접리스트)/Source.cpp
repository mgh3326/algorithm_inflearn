#include<iostream>
using namespace std;
#define inputSize 3
int main(void) {
	int n = 0;
	int m = 0;
	cin >> n >> m;
	int** matrix = new  int* [n];
	int tempY = 0;
	int tempX = 0;
	int tempValue = 0;
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new  int[n];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			matrix[i][j] = 0;
		}
	}
	for (int i = 0; i < m; i++)
	{
		cin >> tempX >> tempY >> tempValue;
		matrix[tempX - 1][tempY - 1] = tempValue;

	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}