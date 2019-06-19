#include<iostream>
int main(void) {
	int n = 0;
	int m = 0;
	scanf("%d", &n);
	scanf("%d", &m);
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if ((i+1) % m == 0)
		{
			sum += i+1;
		}
	}
	printf("%d", sum);
	return 0;
}