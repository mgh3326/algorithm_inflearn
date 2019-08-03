#include<iostream>
using namespace std;

int main(void) {
	int num = 0;
	int sum = 0;
	int resultCount = 0;
	scanf("%d", &num);

	for (int i = 2; i < num; i++) {
		sum = 0;

		for (int j = 0; j < i; j++) {
			sum += j + 1;
		}
		if (num - sum < 0)
			break;
		if ((num - sum) % i == 0)
		{
			resultCount++;
			for (int k = 0; k < i; k++) {
				cout << (k + 1 + (int)((num - sum) / i));
				if (k != i - 1) {
					cout << " + ";
				}
			}
			cout <<" = "<< num << endl;
		}

	}
	cout << resultCount << endl;

	return 0;
}