#include<iostream>
using namespace std;
int main(void) {
	int num = 10;
	int** arr = new int* [2];
	int scoreA = 0;
	int scoreB = 0;
	char output = 'D';
	bool BigAthanB = true;
	for (int i = 0; i < 2; i++)
	{
		arr[i] = new int[num];
	}
	for (int j = 0; j < 2; j++)
		for (int i = 0; i < num; i++)
		{
			scanf("%d", &arr[j][i]);
		}
	for (int i = 0; i < num; i++)
	{
		if (arr[0][i] == arr[1][i])
		{
			scoreA += 1;
			scoreB += 1;
		}

		else {
			if (arr[0][i] > arr[1][i])
			{
				scoreA += 3;
				BigAthanB = true;
			}
			else if (arr[0][i] < arr[1][i])
			{
				scoreB += 3;
				BigAthanB = false;
			}
			if (scoreA == scoreB)
			{
				if (BigAthanB == true)
				{
					output = 'A';
				}
				else {
					output = 'B';
				}
			}
		}
		if (scoreA > scoreB)
		{
			output = 'A';
		}
		else if (scoreA < scoreB)
		{
			output = 'B';
		}
	}
	cout << scoreA << " " << scoreB << endl << output << endl;

	return 0;
}