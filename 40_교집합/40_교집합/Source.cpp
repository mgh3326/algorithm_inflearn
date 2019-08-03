#include<iostream>
using namespace std;
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

	//// 삽입 정렬 수행
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

	// 정렬 결과 출력
	for (int i = 0; i < resultPoint; i++) {
		printf("%d ", resultArr[i]);
	}
	return 0;
}