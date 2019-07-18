#include <iostream>

using namespace std;
int arr[1002];
int main(void) {
	int num = 0;
	int question = 0;
	int result = 0;
	scanf("%d", &num);
	int sum = 0;
	for (int i = 0; i < 1000; i++)
	{
		sum += i + 1;
		arr[i + 1] = sum;
	}
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &question);
		scanf("%d", &result);
		if (arr[question] == result)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;

		}
	}
	return 0;
}