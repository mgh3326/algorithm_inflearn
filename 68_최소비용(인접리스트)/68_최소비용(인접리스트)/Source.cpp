#include<iostream>
#include<vector>
using namespace std;
int currentNum = 0;
int resultNum = 0;
void RouteNavigate(int startIndex, int endIndex, int** matrix, bool* checkArr, int length, vector <int>* myVec)
{
	if (startIndex == endIndex)
	{
		if (resultNum == 0 || currentNum < resultNum)
		{
			resultNum = currentNum;
		}
		return;
	}

	for (int i = 0; i < myVec[startIndex].size(); i++)
	{
		int index = myVec[startIndex][i];
		if (matrix[startIndex][index] > 0 && checkArr[index] == false)
		{
			checkArr[index] = true;
			currentNum += matrix[startIndex][index];
			RouteNavigate(index, endIndex, matrix, checkArr, length, myVec);
			checkArr[index] = false;
			currentNum -= matrix[startIndex][index];

		}

	}
}
int main(void) {
	int n = 0;
	int m = 0;
	cin >> n >> m;
	int** matrix = new  int* [n];
	vector <int>* myVec = new vector <int>[n];
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
		myVec[tempX - 1].push_back(tempY - 1);
		matrix[tempX - 1][tempY - 1] = tempValue;

	}
	RouteNavigate(0, n - 1, matrix, checkArr, n, myVec);
	cout << resultNum << endl;
	return 0;
}