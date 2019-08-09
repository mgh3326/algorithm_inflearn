#include<iostream>
#include<queue>
#include<algorithm>
#include<utility>
using namespace std;
int main(void) {
	int n = 0;
	cin >> n;
	priority_queue<pair<int, int>> pQ;
	int tempM = 0;
	int tempD = 0;
	int maxDay = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> tempM >> tempD;
		if (tempD > maxDay)
		{
			maxDay = tempD;
		}
		pQ.push(pair<int, int>(tempD, tempM));
	}
	int tempIndex = maxDay;
	int result = 0;
	int tempValue = 0;
	while (tempIndex> 0 &&!pQ.empty())
	{
		pair<int, int> temp= pQ.top();
		pQ.pop();
		if (temp.first >= tempIndex)
		{
			tempIndex--;
			tempValue = temp.second;
			result+=temp.second;
		}
		
	
	}
	cout << result << endl;
	return 0;
}