#include<iostream>
// ���� Ž�� �˰��� �ݺ��� ����
// ã�� ���ڰ� ������ ã�� ������ �ε��� ���� ������ -1 ����
int BSearch(int ar[], int len, int target) {
	int first = 0;
	int last = len - 1;
	int mid = 0;

	// first�� last�� ���� ������ �ݺ��ϴ� ����
	// while(first < last)�̸� ������ �ϳ��� ��������
	// �˻����� �ʰ� ����Ǳ� �����̴�.
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

// ���� ����
void insertion_sort(int list[], int n) {
	int i, j, key;

	// ���ؽ� 0�� �̹� ���ĵ� ������ �� �� �ִ�.
	for (i = 1; i < n; i++) {
		key = list[i]; // ���� ���Ե� ������ i��° ������ key ������ ����

		// ���� ���ĵ� �迭�� i-1�����̹Ƿ� i-1��°���� �������� �����Ѵ�.
		// j ���� ������ �ƴϾ�� �ǰ�
		// key ������ ���ĵ� �迭�� �ִ� ���� ũ�� j��°�� j+1��°�� �̵�
		for (j = i - 1; j >= 0 && list[j] > key; j--) {
			list[j + 1] = list[j]; // ���ڵ��� ���������� �̵�
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
	//// ���� ���� ����
	insertion_sort(arr, num);
	int result = BSearch(arr, num, target);
	std::cout << result + 1 << std::endl;
	return 0;
}

//��ó: https://ledgku.tistory.com/35 [�߿�� ����]
