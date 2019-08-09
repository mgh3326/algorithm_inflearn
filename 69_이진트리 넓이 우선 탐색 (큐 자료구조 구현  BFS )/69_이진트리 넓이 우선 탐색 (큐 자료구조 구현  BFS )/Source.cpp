#include<iostream>
#include<queue>
#include<vector>
#include<stack>
using namespace std;
void BFS(int n, bool* checkArr, vector<int>* vArr)
{
	queue<int> q;

	for (int i = 0; i < n; i++)
	{
		checkArr[i] = false;
	}
	checkArr[0] = true;
	int startIndex = 0;
	q.push(startIndex);
	while (q.size() > 0)
	{
		startIndex = q.front();
		cout << startIndex + 1 << " ";
		q.pop();
		for (int i = 0; i < vArr[startIndex].size(); i++) {
			if (checkArr[vArr[startIndex][i]] == false)
			{
				q.push(vArr[startIndex][i]);
				checkArr[vArr[startIndex][i]] = true;
			}
		}
	}
	cout << endl;
}
void DFS(int n, bool* checkArr, vector<int>* vArr)
{
	stack<int> s;

	for (int i = 0; i < n; i++)
	{
		checkArr[i] = false;
	}
	checkArr[0] = true;
	int startIndex = 0;
	cout << startIndex + 1 << " ";
	s.push(startIndex);
	while (s.size() > 0)
	{
		startIndex = s.top();
		s.pop();
		for (int i = 0; i < vArr[startIndex].size(); i++) {
			if (checkArr[vArr[startIndex][i]] == false)
			{
				int nextIndex = vArr[startIndex][i];
				cout <<  nextIndex + 1 << " ";
				s.push(startIndex);
				s.push(nextIndex);
				checkArr[nextIndex] = true;
				break;
			}
		}
	}
	cout << endl;
}
int main(void) {
	int n = 7;
	vector<int>* vArr = new vector<int>[n];
	bool* checkArr = new bool[n];
	int tempX = 0;
	int tempY = 0;

	for (int i = 0; i < 6; i++)
	{
		cin >> tempX >> tempY;
		vArr[tempX - 1].push_back(tempY - 1);
	}
	cout << "BFS" << endl;
	BFS(n, checkArr, vArr);
	cout << "DFS" << endl;
	DFS(n, checkArr, vArr);
}