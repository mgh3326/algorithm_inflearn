#include<iostream>
using namespace std;
int main(void) {
	int height = 0;
	int width = 0;
	scanf("%d %d", &height, &width);
	int rowCount = height;
	int colCount = width;

	int** arr = new int* [rowCount];
	for (int i = 0; i < rowCount; ++i)
		arr[i] = new int[colCount];
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	int windowHeight = 0;
	int windowWidth = 0;
	scanf("%d %d", &windowHeight, &windowWidth);
	int max = 0;
	int temp = 0;
	for (int i = 0; i < height - windowHeight + 1; i++) {
		for (int j = 0; j < width - windowWidth + 1; j++) {
			temp = 0;
			for (int k = 0; k < windowHeight; k++) {
				for (int l = 0; l < windowWidth; l++) {
					temp += arr[i + k][j + l];
				}
			}
			if (temp > max) {
				max = temp;
			}
		}
	}
	cout << max << endl;
	return 0;
}