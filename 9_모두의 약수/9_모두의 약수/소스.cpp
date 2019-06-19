#include<iostream>
using namespace std;
int count_arr[50000] = { 0 };
int find_count(int n) {
	int count = 2;
	int temp = 2;
	int temp_count = 2;
	if (n == temp)
	{
		temp = temp * 2;
		return temp_count++;
	}
	for (int i = 1; i < n / 2; i++)
	{
		
		if (n % (i + 1) == 0)
		{
			count++;
		}
	}
	return count;
}
int main(void)

{
	int num;
	scanf("%d", &num);
	printf("1");
	for (int i = 1; i < num; i++)
	{
		int index = i + 1;
		printf(" %d", find_count(index));

	}
	printf("\n");
	return 0;
}