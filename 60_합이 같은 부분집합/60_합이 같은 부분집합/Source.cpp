#include<iostream>
#include<string>
using namespace std;
string resultStr;
void frontCircuit(int num, int limit, int* arr, bool* checkArr, int* resultArr)
{
	if (num >= limit || resultStr.compare("YES") == 0)
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
					/*cout << resultArr[i] << " ";*/
					sumA += resultArr[i];
				}
				else {
					sumB += resultArr[i];
				}
	
			}
			if (sumA == sumB)
			{
				resultStr = "YES";
				return;
			}
			/*cout << endl;*/
		}
		frontCircuit(2 * num + 1, limit, arr, checkArr, resultArr);
		frontCircuit(2 * num + 2, limit, arr, checkArr, resultArr);
	}
}
int main(void) {
	resultStr = "NO";
	int num = 0;
	cin >> num;
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
	frontCircuit(0, length, arr, checkArr, resultArr);
	cout << resultStr << endl;
	return 0;
}