#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
	int num = 0;
	scanf("%d", &num);
	int** arr = new int* [2];
	for (int i = 0; i < 2; i++)
	{
		arr[i] = new int[num];
	}
	int temp = 0;
	for (int j = 0; j < 2; j++)
	{
		for (int i = 0; i < num; i++)
		{
			scanf("%d", &arr[j][i]);

		}

	}
	for (int i = 0; i < num; i++)
	{
			if (arr[0][i] > arr[1][i])
			{
				if (arr[0][i] == 3)
				{
					if (arr[1][i] == 1)
					{
						cout << "B" << endl;

					}
					else {
						cout << "A" << endl;
					}
				}
				else {
					if (arr[1][i] == 1)
					{
						cout << "A" << endl;

					}
					else {
						cout << "B" << endl;
					}
				}
			}
			else if (arr[0][i] < arr[1][i])
			{
				if (arr[0][i] == 1)
				{
					if (arr[1][i] == 3)
					{
						cout << "A" << endl;

					}
					else {
						cout << "B" << endl;
					}
				}
				else {
					if (arr[1][i] == 3)
					{
						cout << "B" << endl;

					}
					else {
						cout << "A" << endl;
					}
				}

			}
			else {
				cout << "D" << endl;

			}

	}
	return 0;
}