#include<iostream>
using namespace std;
int main(void) {
	int n = 0;
	int count = 1;
	string str;
	cin >> str;
	string out = "";
	bool isStart = false;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] < 48 + 10)
		{
			if (isStart== false&& str[i] == 48)
			{

			}
			else {
				out += (str[i]);
				isStart = true;
			}
			
		}
	}
	cout << out;
	printf("\n", out);
	int intValue = atoi(out.c_str());
	for (int i = 0; i < intValue/2; i++)
	{
		if (intValue % (i + 1) == 0)
		{
			count++;
		}
	}

	printf("%d\n", count);
	return 0;

}