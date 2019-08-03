#include<iostream>
using namespace std;

int main(void)
{
	int firstNum = 0;
	int secondNum = 0;
	scanf("%d", &firstNum);
	int* firstArr = new int[firstNum];
	for (int i = 0; i < firstNum; i++)
	{
		scanf("%d", &firstArr[i]);
	}
	scanf("%d", &secondNum);
	int* secondArr = new int[secondNum];

	int totalNum = firstNum + secondNum;
	int* totalArr = new int[totalNum];
	for (int i = 0; i < secondNum; i++)
	{
		scanf("%d", &secondArr[i]);
	}
	int firstPoint = 0;
	int secondPoint = 0;
	int totalPoint = 0;
	while (true)
	{
		if (firstPoint == firstNum)
		{
			for (secondPoint; secondPoint < secondNum; secondPoint++)
			{
				totalArr[totalPoint] = secondArr[secondPoint];
				totalPoint++;
			}
			break;
		}
		if (secondPoint == secondNum)
		{
			for (firstPoint; firstPoint < firstNum; firstPoint++)
			{
				totalArr[totalPoint] = firstArr[firstPoint];
				totalPoint++;
			}
			break;
		}
		if (firstArr[firstPoint] > secondArr[secondPoint]) {
			totalArr[totalPoint] = secondArr[secondPoint];
			totalPoint++;
			secondPoint++;

		}
		else {
			totalArr[totalPoint] = firstArr[firstPoint];
			totalPoint++;
			firstPoint++;

		}
	}

	// 정렬 결과 출력
	for (int i = 0; i < totalNum; i++) {
		printf("%d ", totalArr[i]);
	}
	return 0;
}