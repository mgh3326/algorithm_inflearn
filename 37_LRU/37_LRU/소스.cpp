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
	int workSize = 0;

	scanf("%d %d", &cacheNum, &workSize);
	//
	int* cacheArr = new int[cacheNum];
	for (int i = 0; i < cacheNum; i++) {
		cacheArr[i] = 0;
	}
	int* workArr = new int[workSize];
	int temp = 0;
	int pos = -1;
	for (int i = 0; i < workSize; i++)
	{
		pos = -1;
		scanf("%d", &temp);

		for (int j = 0; j < cacheNum; j++) {
			if (cacheArr[j] == temp)
			{
				pos = j;
				break;
			}
		}
		if (pos == -1) {
			for (int j = 0; j < cacheNum-1; j++) {
				cacheArr[cacheNum - j -1] = cacheArr[cacheNum - j - 2];
			}
			cacheArr[0] = temp;
		}
		else {
			for (int j = 0; j < pos ; j++) {
				cacheArr[pos - j] = cacheArr[pos - j - 1];
			}
			cacheArr[0] = temp;
		}
	}
	
	//for (int i = 0; i < workSize; i++)
	//{
	//	scanf("%d", &workArr[i]);
	//}

	//// ���� ���� ����
	//insertion_sort(cacheArr, cacheNum);

	// ���� ��� ���
	for (i = 0; i < cacheNum; i++) {
		printf("%d ", cacheArr[i]);
	}
}
//https://gmlwjd9405.github.io/2018/05/06/algorithm-insertion-sort.html