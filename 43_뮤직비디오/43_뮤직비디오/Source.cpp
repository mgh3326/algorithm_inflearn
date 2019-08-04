#include<iostream>
using namespace std;
// 이진 탐색 알고리즘 반복문 구현
// 찾는 숫자가 있으면 찾는 숫자의 인덱스 리턴 없으면 -1 리턴
int BSearch(int ar[], int len, int target) {
	int first = 0;
	int last = len - 1;
	int mid = 0;

	// first와 last가 같은 경우까지 반복하는 이유
	// while(first < last)이면 마지막 하나가 남았을때
	// 검사하지 않고 종료되기 때문이다.
	while (first <= last) {
		mid = (first + last) / 2;
		if (ar[mid] == target) {
			return mid;
		}
		else {
			if (ar[mid] > target)
				last = mid - 1;
			else
				first = mid + 1;
		}
	}
	return -1;
}
bool solution(int arr[], int len, int num, int mid)
{
	bool res = true;
	int temp = 0;
	int count = 0;
	for (int i = 0; i < len; i++)
	{
		temp += arr[i];
		if (temp > mid) {
			temp = arr[i];
			count++;
		}
		if (count == num) {
			res = false;
		}
	}
	return res;
}
int main(void) {
	int len = 0;
	int num = 0;
	scanf("%d %d", &len, &num);
	int* arr = new int[len];
	int sum = 0;
	for (int i = 0; i < len; i++) {

		scanf("%d", &arr[i]);
		sum += arr[i];
	}


	int first = 0;
	int last = sum;
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
			last = mid - 1;
		}
		else {
			first = mid + 1;

		}
	}
	cout << res << endl;
	return 0;
}