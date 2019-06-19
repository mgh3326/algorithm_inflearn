#include<iostream>
int main(void) {
	int n = 0;
	scanf("%d", &n);
	int sum = 1;
	printf("1");

	for (int i = 1; i < n/2; i++)
	{
		if (n % (i + 1) == 0)
		{
				printf(" + %d", i + 1);
			sum += i + 1;
		}
	}
	printf(" = %d\n", sum);
	return 0;

}