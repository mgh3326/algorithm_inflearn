#include<iostream>
int main(void) {
	std::string str = "";
	std::cin >> str;
	int result = 0;
	for (int i = 0; i<str.length()-1; i++)
	{
		result +=(i + 1) * (9 * pow(10,(i)));
	}
	int temp = atoi(str.c_str()) - pow(10,(str.length() - 1)) +1;
	result += temp * (str.length());
		std::cout << result << std::endl;

	return 0;
}