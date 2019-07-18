#include<iostream>
#include<deque>
using namespace std;
int main(void)
{
	int n = 0;
	scanf("%d", &n);
	int max = 0;
	int temp = 0;
	int count = 0;
	int old = 0;
	bool isFirst = true;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		if (temp >= old)
		{
			count++;
		}
		else {
			count = 1;
		}
		old = temp;
		if (max < count)
		{
			max = count;
		}
	}
	cout << max << endl;
	return 0;
}
