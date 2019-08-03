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
int main(void) {
	int firstNum = 0;
	int secondNum = 0;
	int resultNum = 0;
	scanf("%d", &firstNum);
	int* firstArr = new int[firstNum];
	int* resultArr = new int[firstNum];
	for (int i = 0; i < firstNum; i++)
	{
		scanf("%d", &firstArr[i]);
	}
	scanf("%d", &secondNum);
	int* secondArr = new int[secondNum];
	for (int i = 0; i < secondNum; i++)
	{
		scanf("%d", &secondArr[i]);
	}

	//// ���� ���� ����
	insertion_sort(firstArr, firstNum);
	insertion_sort(secondArr, secondNum);
	
	int firstPoint = 0;
	int secondPoint = 0;
	int resultPoint = 0;
	while (true)
	{
		if (firstPoint == firstNum)
		{
			break;
		}
		if (secondPoint == secondNum)
		{
			break;
		}
		if (firstArr[firstPoint] > secondArr[secondPoint]) {

			secondPoint++;

		}
		else if(firstArr[firstPoint] < secondArr[secondPoint]) {

			firstPoint++;

		}
		else {
			resultArr[resultPoint] = secondArr[secondPoint];
			resultPoint++;
			/*resultArr[resultPoint] = firstArr[firstPoint];
			resultPoint++;*/
			firstPoint++;
			secondPoint++;

		}
	}

	// ���� ��� ���
	for (int i = 0; i < resultPoint; i++) {
		printf("%d ", resultArr[i]);
	}
	return 0;
}