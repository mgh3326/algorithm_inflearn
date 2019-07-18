#include<iostream>
int main() {
	std::string str;
	std::cin >> str;
	int arr[10];
	for (int i = 0; i < 10; i++)
		arr[i] = 0;
	for (int i = 0; i < str.length(); i++)
	{
		arr[str[i]-'0']++;
	}
	int index = 9;
	int max = arr[9];
	for (int i = 1; i < 10; i++)
	{
		if (max < arr[9-i])
		{
			max = arr[9-i];
			index = 9-i;
		}
	}
	std::cout << index << std::endl;
	return 0;
}