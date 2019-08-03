#include<iostream>
#include <string>
using namespace std;
int main(void) {
	int num = 0;
	scanf("%d", &num);
	int count = 0;
	for (int i = 0; i < num; i++)
	{
		string str = to_string(i + 1);

		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == '3') {
				count++;
			}
		}
	}


	cout << count << "\n";
	return 0;
}