#include<iostream>
using namespace std;
int main(void)
{
	int num = 0;
	int threadHoldingValue = 0;
	scanf("%d %d", &num, &threadHoldingValue);
	int temp = 0;
	int max = 0;
	int count = 0;
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &temp);

		if (temp > threadHoldingValue)
		{
			count++;
		}
		else
		{
			if (count > max)
			{
				max = count;
			}
			count = 0;
		}
		
	}
	if (count > max)
	{
		max = count;
	}
	cout << max << endl;
	return 0;
}