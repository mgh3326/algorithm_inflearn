#include<iostream>
using namespace std;
bool isPrime(int x)
{
	if (x == 1)
		return false;
	if (x == 2)
		return true;
	for (int i = 1; i < sqrt(x); i++)
	{
		if (x % (i + 1) == 0)
			return false;
	}
	return true;
}
int main(void) {
	int num = 0;
	scanf("%d", &num);
	int* arr = new int[num+1];
	for (int i = 0; i < num+1; i++)
	{
		arr[i] = 0;
	}
	cout << num << "! = ";
	for (int i = 1; i < num; i++)
	{
		int currentNum = i + 1;
		int temp = currentNum;
		for (int j = 1; j < currentNum; j++)
		{
			if (isPrime(j + 1))
			{
				while (true)
				{
					if (temp % (j + 1) == 0)
					{
						temp = temp / (j + 1);
						arr[j + 1]++;
					}
					else {
						break;
					}
				}
			}
		}
	}
	for (int i = 1; i < num; i++)
	{
		if (isPrime(i + 1)) {
			cout << arr[i + 1] << " ";
		}
	}
	printf("\n");
	return 0;
}