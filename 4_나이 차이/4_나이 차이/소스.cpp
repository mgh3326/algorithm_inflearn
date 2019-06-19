#include<iostream>
int main(void) {
	int n = 0;
	scanf("%d", &n);
	int sum = 0;
	int min = 0;
	int max = 0;
	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp);

		if (i == 0)
		{
			min = temp;
			max = temp;
		}
		else
		{
			if (temp > max)
			{
				max = temp;
			}
			if (temp < min)
			{
				min = temp;
			}
		}
	}
	
	printf("%d\n", max -min);
	return 0;

}