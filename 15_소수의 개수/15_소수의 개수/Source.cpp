#include<iostream>
bool odd_arr[100001] = { false };

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
	int count = 0;
	int num = 0;
	scanf("%d", &num);
	for (int i = 1; i < num; i++)
	{
		if (isPrime(i+1)) {
			count++;
		}
	}
	std::cout << count;
	printf("\n");
	return 0;
}