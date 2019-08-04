#include<iostream>
using namespace std;
int main(void) {
	int num = 9;
	double sum = 0;
	int mean = 0;
	int arr[9];
	int min = 0;
	int res = 0;

	for (int i = 0; i < num; i++) {
		sum = 0;
		for (int j = 0; j < num; j++) {
			scanf("%d", &arr[j]);
			sum += arr[j];
		}
		mean = floor(sum / num + 0.5);
		min = sum;
		for (int j = 0; j < num; j++) {
			if (abs(arr[num - j - 1] - mean) < min) {
				min = abs(arr[num - j - 1] - mean);
				res = arr[num - j - 1];
				
			}
			else if (arr[num - j - 1] - mean == min)
			{
				if (arr[num - j - 1] > res) {
					res = arr[num - j - 1];
				}

			}
		}
		cout << mean <<" "<< res << endl;

	}
	return 0;
}