#include<iostream>
using namespace std;
int main(void) {
	int num = 0;
	scanf("%d", &num);
	int rowCount = num;
	int colCount = num;
	int* frontArr = new int[num];
	for (int i = 0; i < num; i++) {
		scanf("%d", &frontArr[i]);
	}
	int* rightArr = new int[num];
	for (int i = 0; i < num; i++) {
		scanf("%d", &rightArr[i]);
	}
	int** arr = new int* [rowCount];
	for (int i = 0; i < rowCount; ++i)
		arr[i] = new int[colCount];

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			arr[j][i] = frontArr[i];
		}
	}
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (arr[i][j] > rightArr[i]) {
				arr[i][j] = rightArr[i];
			}

		}
	}
	int sum = 0;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			sum += arr[i][j];
		}
	}
	cout << sum << endl;
	return 0;
}