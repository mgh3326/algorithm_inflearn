#include<iostream>
using namespace std;

int main(void)

{
	int num;
	scanf("%d", &num);
	int* arr = new int[num]; // �迭 ���� new �����ڸ� ����Ѵ�. �迭 ���̴� ����� �ƴϿ��� �ȴ�.
	for (int i = 0; i < num; i++)
	{
		arr[i+1] = 0;
	}
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; i*j <= num; j++)
		{
			arr[i * j]++;
		}

	}
	printf("1");
	for (int i = 2; i <= num; i++)
	{
		printf(" %d",arr[i]);
	}
	printf("\n");
	return 0;
}