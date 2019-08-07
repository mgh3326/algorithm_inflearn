#include<iostream>
#include<string>
using namespace std;
int resultValue = 0;
void frontCircuit(int num, int limit, int* arr, bool* checkArr, int* resultArr, int target, int isFirst)
{
	if (num >= limit)
	{
		return;
	}
	else {

		/*cout << num << endl;*/
		if (num != 0)
		{
			int temp = log2(num + 1);
			if (num % 2 == 0)
			{
				checkArr[temp - 1] = false;
			}
			else {
				checkArr[temp - 1] = true;
			}
		}
		if (int(log2(num + 1)) == int(log2(limit)) || num == limit)
		{
			int sumA = 0;
			int sumB = 0;
			for (int i = 0; i < int(log2(limit)); i++)
			{

				if (checkArr[i] == true)
				{
					sumA += resultArr[i];
				}

			}

			if (sumA == target)
			{
				resultValue++;
				return;
			}
			else if (isFirst == true && sumA > target) {
				int tempTarget = sumA - target;
				int tempNum = 0;
				for (int i = 0; i < int(log2(limit)); i++)
				{
					if (checkArr[i] != true)
					{
						tempNum++;
					}
				}
				int tempLength = pow(2, tempNum + 1) - 1;
				int* tempArr = new int[tempLength];
				bool* tempCheckArr = new bool[num + 1];
				int* tempResultArr = new int[num + 1];
				int tempIndex = 0;
				for (int i = 0; i < int(log2(limit)); i++)
				{
					if (checkArr[i] != true)
					{
						tempResultArr[tempIndex] = resultArr[i];
						tempIndex++;
					}
				}
				int index = 1;
				int value = -1;
				for (int i = 0; i < tempLength; i++)
				{
					if (index == i + 1)
					{
						index *= 2;
						value++;
					}
					if (value == 0)
					{
						tempArr[i] = 0;
					}
					else {
						tempArr[i] = tempResultArr[value - 1];
					}
				}

				frontCircuit(0, tempLength, tempArr, tempCheckArr, tempResultArr, tempTarget, false);

			}
			/*cout << endl;*/
		}
		frontCircuit(2 * num + 1, limit, arr, checkArr, resultArr, target, isFirst);
		frontCircuit(2 * num + 2, limit, arr, checkArr, resultArr, target, isFirst);
	}
}
int main(void) {
	int num = 0;
	int m = 0;
	cin >> num >> m;
	int length = pow(2, num + 1) - 1;
	int* arr = new int[length];
	bool* checkArr = new bool[num + 1];
	int* resultArr = new int[num + 1];
	for (int i = 0; i < num; i++)
	{
		cin >> resultArr[i];
	}
	int index = 1;
	int value = -1;
	for (int i = 0; i < length; i++)
	{
		if (index == i + 1)
		{
			index *= 2;
			value++;
		}
		if (value == 0)
		{
			arr[i] = 0;
		}
		else {
			arr[i] = resultArr[value - 1];

		}

	}
	frontCircuit(0, length, arr, checkArr, resultArr, m, true);
	cout << resultValue << endl;
	return 0;
}