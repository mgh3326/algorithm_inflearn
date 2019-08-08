#include<iostream>
using namespace std;
int resultNum = 0;
void MazeNavigate(int startX, int startY, int** matrix, int n, bool** checkArr) {
	if (startX == n - 1 && startY == n - 1)
	{
		resultNum++;
		return;
	}
	if (startX < n - 1 && checkArr[startX + 1][startY] == false && matrix[startX + 1][startY] == 0)
	{
		checkArr[startX + 1][startY] = true;
		MazeNavigate(startX + 1, startY, matrix, n, checkArr);
		checkArr[startX + 1][startY] = false;
	}
	if (startY < n - 1 && checkArr[startX][startY + 1] == false && matrix[startX][startY + 1] == 0)
	{
		checkArr[startX][startY + 1] = true;
		MazeNavigate(startX, startY + 1, matrix, n, checkArr);
		checkArr[startX][startY + 1] = false;
	}
	//TODO
	if (startX > 0 && checkArr[startX - 1][startY] == false && matrix[startX - 1][startY] == 0)
	{
		checkArr[startX - 1][startY] = true;
		MazeNavigate(startX - 1, startY, matrix, n, checkArr);
		checkArr[startX - 1][startY] = false;
	}
	//TODO
	if (startY > 0 && checkArr[startX][startY - 1] == false && matrix[startX][startY - 1] == 0)
	{
		checkArr[startX][startY - 1] = true;
		MazeNavigate(startX, startY - 1, matrix, n, checkArr);
		checkArr[startX][startY - 1] = false;
	}

}
int main(void) {
	int n = 7;
	int** matrix = new int* [n];
	bool** checkArr = new bool* [n];
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[n];
		checkArr[i] = new bool[n];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
			checkArr[i][j] = false;
		}
	}
	checkArr[0][0] = true;
	MazeNavigate(0, 0, matrix, n, checkArr);
	cout << resultNum << endl;
	return 0;
}