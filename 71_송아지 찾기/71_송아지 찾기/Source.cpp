#include<iostream>
#include<queue>
#include<vector>
#define WAY_COUNT 3
using namespace std;
int main(void) {
	int wayArr[WAY_COUNT] = { 1,-1,5 };
	int startInput = 0;
	int endInput = 0;
	cin >> startInput >> endInput;
	
	int startIndex = startInput - 1;
	int length;
	int min;
	if (endInput > startIndex)
	{
		length = endInput + 1;
		min = startInput - 1;
	}
	else
	{
		length = startIndex + 1;
		min = endInput - 1;
	}
	int tempX = 0;
	int tempY = 0;
	queue<int> q;
	vector<int>* vArr = new vector<int>[length];
	int* checkArr = new int[length];
	for (int i = 0; i < length; i++)
	{
		checkArr[i] = 0;
	}
	checkArr[startIndex] = true;
	q.push(startIndex);
	int vertextCount = 0;
	bool isNewLine = false;
	bool isStart = false;
	bool isEnd= true;
	
	while (!q.empty())
	{
		startIndex = q.front();
		if (startIndex == endInput - 1)
		{
			break; 
		}
		q.pop();
		for (int i = 0; i < WAY_COUNT; i++)
		{
			int nextIndex = startIndex + wayArr[i];
			

			if (nextIndex<length+1 && nextIndex>min-1&& checkArr[nextIndex] == 0)
			{
				
				q.push(nextIndex);
				checkArr[nextIndex] = checkArr[startIndex]+1;
			}

		}
	}
	cout << checkArr[startIndex]-1 << endl;
	return 0;
}