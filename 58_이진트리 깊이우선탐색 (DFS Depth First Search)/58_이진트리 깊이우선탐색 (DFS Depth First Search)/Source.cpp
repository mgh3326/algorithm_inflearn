#include<iostream>
using namespace std;
void frontCircuit(int num, int limit, int* arr)
{
	if (num >= limit)
	{
		return;
	}
	else {
		cout << arr[num] << " ";
		frontCircuit(2 * num + 1, limit, arr);
		frontCircuit(2 * num + 2, limit, arr);
	}
}
void midCircuit(int num, int limit, int* arr)
{
	if (num >= limit)
	{
		return;
	}
	else {
		midCircuit(2 * num + 1, limit, arr);
		cout << arr[num] << " ";
		midCircuit(2 * num + 2, limit, arr);
	}
}
void rearCircuit(int num, int limit, int* arr)
{
	if (num >= limit)
	{
		return;
	}
	else {
		rearCircuit(2 * num + 1, limit, arr);
		rearCircuit(2 * num + 2, limit, arr);
		cout << arr[num] << " ";
	}
}
int main(void) {
	int num = 7;
	int* arr = new int[num];
	for (int i = 0; i < num; i++)
	{
		arr[i] = i + 1;
	}
	cout << "전위순회 출력 : ";
	frontCircuit(0, num, arr);
	cout << endl;
	cout << "중위순회 출력 : ";
	midCircuit(0, num, arr);
	cout << endl;
	cout << "후위순회 출력 : ";
	rearCircuit(0, num, arr);
	cout << endl;
	return 0;
}