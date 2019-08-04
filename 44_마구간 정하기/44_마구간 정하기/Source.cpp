#include<iostream>
#include <algorithm>
using namespace std;

bool solution(int arr[], int len, int num, int mid)
{
	bool res = false;
	int temp = arr[0];
	int count = 0;
	for (int i = 1; i < len; i++)
	{
		if (arr[i] - temp >= mid) {
			temp = arr[i];
			count++;
		}
		if (count == num-1) {
			res = true;
			return res;
		}
	}
	return res;
}
int main(void) {
	int len = 0;
	int num = 0;
	scanf("%d %d", &len, &num);
	int* arr = new int[len];
	for (int i = 0; i < len; i++) {

		scanf("%d", &arr[i]);
	}
	sort(arr, arr + len);

	int first = 1;
	int last = arr[len-1];
	int mid = 0;
	int res = 0;

	// first와 last가 같은 경우까지 반복하는 이유
	// while(first < last)이면 마지막 하나가 남았을때
	// 검사하지 않고 종료되기 때문이다.
	while (first <= last) {
		mid = (first + last) / 2;
		if (solution(arr, len, num, mid) == true)
		{
			res = mid;
			first = mid + 1;
		}
		else {
			last = mid - 1;

		}
	}
	cout << res << endl;
	return 0;
}