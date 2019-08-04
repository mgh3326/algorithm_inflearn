#include<iostream>
using namespace std;
int main(void) {
	int num = 0;
	int time = 0;
	int sum = 0;

	scanf("%d", &num);
	int* arr = new int[num];
	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	scanf("%d", &time);
	if (sum == time) {
		cout << -1 << endl;
		return 0;
	}
	int index = 0;
	bool is_end = false;
	for (int i = 0; i < sum; i++)
	{
		while (arr[index] == 0) {
			index++;
			if (index == num) {
				index = 0;
			}
		}
		if (is_end == true) {
			cout << index + 1 << endl;
			return 0;
		}
		arr[index] -= 1;
		if (i + 1 == time) {
			is_end = true;
		}
		index++;
		if (index == num) {
			index = 0;
		}
		
	}
	cout << -1 << endl;
	return 0;
}