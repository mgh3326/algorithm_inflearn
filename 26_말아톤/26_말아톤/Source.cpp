#include<iostream>
using namespace std;
int main(void) {
	int num = 0;

	scanf("%d", &num);
	int* arr = new int[num];
	int lastIndex = 0;
	/*lastIndex++;
	cout << "1 ";*/
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &arr[lastIndex]);
		int count = 1;
		for (int j = 0; j < lastIndex; j++)
		{
			if (arr[j] >= arr[lastIndex])
			{
				count++;
			}
		}
		lastIndex++;

		cout << count << " ";
	}
	cout << "\n";
	return 0;
}