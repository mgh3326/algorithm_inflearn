#include<iostream>
using namespace std;

int main(void) {
	int num=0, positiveNum=0, negativeNum=0,temp = 0;

	scanf("%d", &num);
	int* arr = new int[num];
	int* positiveArr = new int[num];
	int* negativeArr = new int[num];

	for (int i = 0; i < num; i++)
	{
		scanf("%d", &temp);
		if (temp > 0)
		{
			positiveArr[positiveNum]=temp;
			positiveNum++;
		}
		else {
			negativeArr[negativeNum] = temp;
			negativeNum++;
		}
	}
	//for (int i = 0; i < positiveNum - 1; i++)
	//{


	//	for (int j = 0; j < positiveNum - i - 1; j++)
	//	{
	//		if (positiveArr[j] > positiveArr[j + 1])
	//		{
	//			swap(positiveArr[j], positiveArr[j + 1]);
	//		}
	//	}


	//}
	/*for (int i = 0; i < negativeNum - 1; i++)
	{


		for (int j = 0; j < negativeNum - i - 1; j++)
		{
			if (negativeArr[j] < negativeArr[j + 1])
			{
				swap(negativeArr[j], negativeArr[j + 1]);
			}
		}


	}*/
	for (int i = 0; i < negativeNum; i++)
	{
		cout << negativeArr[i] << " ";
	}
	for (int i = 0; i < positiveNum; i++)
	{
		cout << positiveArr[i] << " ";
	}
	cout << "\n";
	return 0;
}