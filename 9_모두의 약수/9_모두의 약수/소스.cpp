#include<iostream>
using namespace std;

int main(void)

{
	int num;
	scanf("%d", &num);
	int* arr = new int[num]; // 배열 버전 new 연산자를 사용한다. 배열 길이는 상수가 아니여도 된다.
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