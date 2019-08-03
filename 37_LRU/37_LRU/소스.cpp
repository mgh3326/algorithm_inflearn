# include <iostream>

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

	//// 삽입 정렬 수행
	//insertion_sort(cacheArr, cacheNum);

	// 정렬 결과 출력
	for (i = 0; i < cacheNum; i++) {
		printf("%d ", cacheArr[i]);
	}
}
//https://gmlwjd9405.github.io/2018/05/06/algorithm-insertion-sort.html