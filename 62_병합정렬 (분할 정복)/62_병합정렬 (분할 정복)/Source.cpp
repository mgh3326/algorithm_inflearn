#include<iostream>
#include "Source.h"
using namespace std;
void Merge(int left, int right, int* arr, int mid)
{
	int firstPoint = 0;
	int secondPoint = 0;
	int* firstArr = new int[mid - left + 1 + 1];
	int* secondArr = new int[right - (mid + 1) + 1 + 1];

	for (int i = left; i < mid + 1; i++)
	{
		firstArr[i - left] = arr[i];
	}
	for (int i = mid + 1; i < right + 1; i++)
	{
		secondArr[i - (mid + 1)] = arr[i];
	}
	for (int i = left; i < right + 1; i++) {
		if (firstPoint == mid - left + 1)
		{
			arr[i] = secondArr[secondPoint];
			secondPoint++;
			continue;
		}
		if (secondPoint == right - (mid + 1) + 1)
		{
			arr[i] = firstArr[firstPoint];
			firstPoint++;
			continue;
		}
		if (firstArr[firstPoint] > secondArr[secondPoint])
		{
			arr[i] = secondArr[secondPoint];
			secondPoint++;
		}
		else {
			arr[i] = firstArr[firstPoint];
			firstPoint++;
		}
	}
}
void Divide(int left, int right, int* arr)
{
	if (left < right)
	{
		int mid = (left + right) / 2;
		Divide(left, mid, arr);
		Divide(mid + 1, right, arr);

		Merge(left, right, arr, mid);

	}
}
int main(void) {
	int num = 0;
	cin >> num;
	int* arr = new int[num];
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	Divide(0, num - 1, arr);
	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}