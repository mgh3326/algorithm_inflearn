#include<iostream>
#include<queue>
using namespace std;
int main(void) {
	int n = 0;
	int k = 0;
	queue<int> q;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		q.push(i + 1);
	}
	int tempCount = 0;
	while (q.size()!=1) {
		tempCount++;
		if (tempCount == k)
		{
			tempCount = 0;
		}
		else {
			int temp = q.front();
			q.push(temp);
		}
		q.pop();

	}
	cout << q.front() << endl;
	return 0;
}