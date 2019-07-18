#include<iostream>
int digit_sum(std::string str) {

	int sum = 0;
	for (int j = 0; j < str.length(); j++)
	{
		sum += str[j] - '0';
	}
	return sum;
}
int main(void) {
	int num = 0;
	scanf("%d", &num);
	std::string str = "";
	int max = 0;
	std::string result = "";

	for (int i = 0; i < num; i++)
	{
		std::cin >> str;
		int sum = digit_sum(str);

		if (max < sum)
		{
			max = sum;
			result = str;
		}

	}
	std::cout << result << std::endl;
}