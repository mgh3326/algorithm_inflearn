#include<iostream>
using namespace std;
int main(void)

{
	char str[101];
	scanf("%[^\n]s ", &str);
	string output;
	for (int i = 0; str[i] !='\0'; i++)
	{
		if (str[i] != ' ')
		{
			if (str[i] < 97)
			{
				output += char(str[i]+32);

			}
			else {
				output += str[i];

			}
		}
	}
	cout << output;
	printf("\n");
	return 0;
}