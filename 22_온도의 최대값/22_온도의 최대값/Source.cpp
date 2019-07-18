#include<iostream>
#include<deque>
using namespace std;
int main(void)
{
	int n, k = 0;
	scanf("%d %d", &n, &k);
	deque<int> q;
	int temp = 0;
	int max = 0;
	int sum = 0;
	bool isFirst = true;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		q.push_back(temp);
		if (q.size() < k)
		{
			continue;
		}
		if (isFirst)
		{
			for (int j = 0; j < q.size(); j++)
			{
				sum += q.at(j);
			}
			isFirst = false;
		}
		else {
			sum += q.at(q.size() - 1);
		}
		if (max == 0 || sum > max)
		{
			max = sum;
		}
		sum -= q.at(0);
		q.pop_front();
	}
	cout << max << endl;
	return 0;
}
