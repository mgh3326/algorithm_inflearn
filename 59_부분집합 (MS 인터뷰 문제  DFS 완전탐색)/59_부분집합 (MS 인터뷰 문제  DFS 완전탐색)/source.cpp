#include<iostream>
using namespace std;
void frontCircuit(int num, int limit, int* arr, bool* resultArr)
{
	if (num >= limit)
	{

		return;
	}
	else {
		
		/*cout << num << endl;*/
		if (num != 0)
		{
			int temp = log2(num+1);
			if (num % 2 == 0)
			{
				resultArr[temp-1] = false;
			}
			else {
				resultArr[temp-1] = true;
			}


		}
		/*int rootNum = int(log2(num));
		int rootLimit = int(log2(limit));*/
		if (int(log2(num+1)) == int(log2(limit))||num==limit)
		{
			for (int i = 0; i < int(log2(limit)); i++)
			{
				if (resultArr[i] == true)
				{
					cout << i + 1 << " ";
				}
			}
			cout << endl;
		}
		frontCircuit(2 * num + 1, limit, arr, resultArr);
		frontCircuit(2 * num + 2, limit, arr, resultArr);
	}
}
int main(void) {
	int num = 0;
	cin >> num;
	int length = pow(2, num + 1) - 1;
	int* arr = new int[length];
	bool* resultArr = new bool[num+1];
	int index = 1;
	int value = 0;
	for (int i = 0; i < length; i++)
	{
		if (index == i + 1)
		{
			index *= 2;
			value++;
		}
		arr[i] = value - 1;

	}
	frontCircuit(0, length, arr, resultArr);
	cout << endl;
	return 0;
}