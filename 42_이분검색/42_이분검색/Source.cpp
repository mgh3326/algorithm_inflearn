#include<iostream>
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

// 삽입 정렬
void insertion_sort(int list[], int n) {
	int i, j, key;

	// 인텍스 0은 이미 정렬된 것으로 볼 수 있다.
	for (i = 1; i < n; i++) {
		key = list[i]; // 현재 삽입될 숫자인 i번째 정수를 key 변수로 복사

		// 현재 정렬된 배열은 i-1까지이므로 i-1번째부터 역순으로 조사한다.
		// j 값은 음수가 아니어야 되고
		// key 값보다 정렬된 배열에 있는 값이 크면 j번째를 j+1번째로 이동
		for (j = i - 1; j >= 0 && list[j] > key; j--) {
			list[j + 1] = list[j]; // 레코드의 오른쪽으로 이동
		}

		list[j + 1] = key;
	}
}
int main(void) {
	int num = 0;
	int target = 0;
	scanf("%d %d", &num, &target);
	int* arr = new int[num];
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}
	//// 삽입 정렬 수행
	insertion_sort(arr, num);
	int result = BSearch(arr, num, target);
	std::cout << result + 1 << std::endl;
	return 0;
}

//출처: https://ledgku.tistory.com/35 [견우와 직녀]
