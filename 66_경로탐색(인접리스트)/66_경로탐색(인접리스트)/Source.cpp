#include<iostream>
#include<vector>
using namespace std;
int resultNum = 0;
void RouteNavigate(int startIndex, int endIndex, vector<int>* myVector, bool* checkArr)
{
	if (startIndex == endIndex)
	{
		resultNum++;
		return;
	}
	for (int i = 0; i < myVector[startIndex].size(); i++)
	{
		int index = myVector[startIndex][i];
		if ( checkArr[index] == false)
		{
			checkArr[index] = true;
			RouteNavigate(index, endIndex, myVector, checkArr);
			checkArr[index] = false;
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
	//배열 말고 벡터를 이용하라고 하네

	vector<int>* myVector = new  vector<int>[n];
	for (int i = 0; i < n; i++)
	{
		checkArr[i] = false;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> tempX >> tempY;
		myVector[tempX - 1].push_back(tempY - 1);
	}
	checkArr[0] = true;
	RouteNavigate(0, n - 1, myVector, checkArr);
	cout << resultNum << endl;
	return 0;
}