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
	int num = 0;
	scanf("%d", &num);

	int* arr = new int[num];
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}

	// ���� ���� ����
	insertion_sort(arr, num);

	// ���� ��� ���
	for (i = 0; i < num; i++) {
		printf("%d ", arr[i]);
	}
}
//https://gmlwjd9405.github.io/2018/05/06/algorithm-insertion-sort.html