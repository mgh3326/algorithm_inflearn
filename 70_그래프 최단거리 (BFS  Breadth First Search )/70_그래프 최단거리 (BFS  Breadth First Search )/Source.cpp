#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(void) {
	int n = 0;
	int m = 0;
	cin >> n >> m;
	int tempX = 0;
	int tempY = 0;
	queue<int> q;
	vector<int>* vArr = new vector<int>[n];
	bool* checkArr = new bool[n];
	int* resultArr = new int[n];
	for (int i = 0; i < m; i++)
	{
		cin >> tempX >> tempY;
		vArr[tempX - 1].push_back(tempY - 1);
		checkArr[i] = false;
	}
	int startIndex = 0;
	checkArr[startIndex] = true;
	q.push(startIndex);
	int vertextCount = 0;
	while (!q.empty())
	{
		startIndex = q.front();
		resultArr[startIndex] = vertextCount;
		q.pop();
		for (int i = 0; i < vArr[startIndex].size(); i++)
		{
			
			int nextIndex = vArr[startIndex][i];
			if (checkArr[nextIndex] != true)
			{
				if (i == 0)
				{
					vertextCount++;
				}
				q.push(nextIndex);
				checkArr[nextIndex] = true;
			}
			
		}
	}
	for (int i = 1; i < n; i++)
	{
		cout << i + 1 << " : " << resultArr[i] << endl;
	}
	return 0;
}