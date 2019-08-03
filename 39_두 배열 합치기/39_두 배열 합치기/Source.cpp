#include<iostream>
using namespace std;
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
int main(void)
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d", &num1);
	int* tempArr = new int[num1];
	for (int i = 0; i < num1; i++)
	{
		scanf("%d", &tempArr[i]);
	}
	scanf("%d", &num2);
	int* totalArr = new int[num1 + num2];
	for (int i = 0; i < num1; i++)
	{
		totalArr[i] = tempArr[i];
	}
	for (int i = num1; i < num1+ num2; i++)
	{
		scanf("%d", &totalArr[i]);
	}

	//// ���� ���� ����
	insertion_sort(totalArr, num1 + num2);

	// ���� ��� ���
	for (int i = 0; i < num1 + num2; i++) {
		printf("%d ", totalArr[i]);
	}
	return 0;
}