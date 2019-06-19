#include<iostream>
int main(void) {
	int a = 0;
	int b = 0;

	scanf("%d %d", &a, &b);
	int sum = 0;
	for (int i = 0; i < b - a + 1; i++)
	{
		if (i == 0)
		{
			printf("%d", a + i);

		}
		else {
			printf(" + %d", a + i);

		}
		sum += a + i;
	}
	printf(" = %d\n", sum);
	return 0;
}