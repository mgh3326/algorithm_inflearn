#include<iostream>
using namespace std;
int main(void) {
	int height = 0;
	int width = 0;
	scanf("%d %d", &height, &width);
	int rowCount = height;
	int colCount = width;
	int temp = 0;
	//다이나믹 array 만들기
	int** arr = new int* [rowCount];
	for (int i = 0; i < rowCount; ++i)
		arr[i] = new int[colCount];
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {

			scanf("%d", &arr[i][j]);
			if (i != 0)
				arr[i][j] += arr[i - 1][j];
			if (j != 0)
				arr[i][j] += arr[i][j - 1];
			if (i != 0 && j != 0)
				arr[i][j] -= arr[i - 1][j - 1];
		}
	}
	int windowHeight = 0;
	int windowWidth = 0;
	scanf("%d %d", &windowHeight, &windowWidth);
	int max = 0;

	//
	for (int i = 0; i < height - windowHeight + 1; i++) {
		for (int j = 0; j < width - windowWidth + 1; j++) {
			temp = arr[i + windowHeight - 1][j + windowWidth - 1];
			if (i != 0)
				temp -= arr[i - 1][j + windowWidth - 1];
			if (j != 0)
				temp -= arr[i + windowHeight - 1][j - 1];
			if (i != 0 && j != 0)
				temp += arr[i - 1][j - 1];


			if (temp > max) {
				max = temp;
			}
		}
	}
	cout << max << endl;
	return 0;
}