#include<iostream>
using namespace std;
int resultNum = 0;
void RouteNavigate(int startIndex, int endIndex, bool** matrix, bool* checkArr, int length)
{
	if (startIndex == endIndex)
	{
		resultNum++;
		return;
	}
	for (int i = 0; i < length; i++)
	{
		if (matrix[startIndex][i] == true && checkArr[i] == false)
		{
			checkArr[i] = true;
			RouteNavigate(i, endIndex, matrix, checkArr, length);
			checkArr[i] = false;
		}

	}
}
int main(void) {
	int n = 0;
	int m = 0;
	int tempX = 0;
	int tempY = 0;
	cin >> n >> m;
	bool* checkArr = new bool[n];

	bool** matrix = new bool* [n];
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new bool[n];
		for (int j = 0; j < n; j++)
		{
			matrix[i][j] = false;
		}
		checkArr[i] = false;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> tempX >> tempY;
		matrix[tempX - 1][tempY - 1] = true;
	}
	checkArr[0] = true;
	RouteNavigate(0, n - 1, matrix, checkArr, n);
	cout << resultNum << endl;
	return 0;
}