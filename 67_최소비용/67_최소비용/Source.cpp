#include<iostream>
using namespace std;
int currentNum = 0;
int resultNum = 0;
void RouteNavigate(int startIndex, int endIndex, int** matrix, bool* checkArr, int length)
{
	if (startIndex == endIndex)
	{
		if (resultNum == 0 || currentNum < resultNum)
		{
			resultNum = currentNum;
		}
		return;
	}
	for (int i = 0; i < length; i++)
	{
		if (matrix[startIndex][i] > 0 && checkArr[i] == false)
		{
			checkArr[i] = true;
			currentNum += matrix[startIndex][i];
			RouteNavigate(i, endIndex, matrix, checkArr, length);
			checkArr[i] = false;
			currentNum -= matrix[startIndex][i];

		}

	}
}
int main(void) {
	int n = 0;
	int m = 0;
	cin >> n >> m;
	int** matrix = new  int* [n];
	bool* checkArr = new bool[n];
	int tempY = 0;
	int tempX = 0;
	int tempValue = 0;
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new  int[n];
		for (int j = 0; j < n; j++) {
			matrix[i][j] = 0;
		}
		checkArr[i] = false;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> tempX >> tempY >> tempValue;
		matrix[tempX - 1][tempY - 1] = tempValue;

	}
	RouteNavigate(0, n - 1, matrix, checkArr, n);
	cout << resultNum << endl;
	return 0;
}