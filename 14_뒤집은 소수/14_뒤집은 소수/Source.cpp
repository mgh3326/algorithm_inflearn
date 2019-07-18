#include<iostream>
int odd_arr[100001] = { 0 };
int reverse(std::string str)
{

	// String reverse
	std::reverse(str.begin(), str.end());
	int intValue = atoi(str.c_str());

	return intValue;
}
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
	int num = 0;
	scanf("%d", &num);
	std::string str = "";
	for (int i = 0; i < num; i++)
	{
		std::cin >> str;
		if (isPrime(reverse(str)))
		{
			std::cout << reverse(str) << " ";
		}
	}
	printf("\n");
	return 0;
}