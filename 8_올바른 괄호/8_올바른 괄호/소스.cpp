#include<iostream>
using namespace std;
int main(void)

{
	char str[31];
	scanf("%[^\n]s ", &str);
	string output = "NO";
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{

		if (str[i] == '(')
		{
			count++;

		}
		else {
			count --;
			if (count < 0)
			{
				break;

			}

		}
	}
	if (count == 0)
	{
		output= "YES";
	}
	cout << output;
	printf("\n");
	return 0;
}