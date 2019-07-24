# include <iostream>

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

void main() {
	int i;
	int cacheNum = 0;
	int cacheSize = 0;

	scanf("%d %d", &cacheNum, &cacheNum);

	int* arr = new int[cacheNum];
	for (int i = 0; i < cacheNum; i++)
	{
		scanf("%d", &arr[i]);
	}

	// ���� ���� ����
	insertion_sort(arr, cacheNum);

	// ���� ��� ���
	for (i = 0; i < cacheNum; i++) {
		printf("%d ", arr[i]);
	}
}
//https://gmlwjd9405.github.io/2018/05/06/algorithm-insertion-sort.html