#include<iostream>
using namespace std;

int main(void) {
	int num = 0;
	scanf("%d", &num);
	int* arr = new int[num];
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}
	int currentRankCount = 0;
	int currentRankScore = 0;
	for (int i = 0; i < num; i++)
	{

		int max = arr[i];
		int index = i;
		for (int j = i; j < num; j++)
		{
			if (arr[j] > max)
			{
				max = arr[j];
				index = j;
			}
		}
		if (index != i)
		{
			swap(arr[i], arr[index]);
		}
		if (arr[i] != currentRankScore)
		{
			currentRankCount++;
			currentRankScore = arr[i];
		}
		if (currentRankCount == 3)
		{
			cout << currentRankScore;
			break;
		}
	}
	cout << "\n";
	return 0;
}