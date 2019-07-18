#include<iostream>
using namespace std;
int main(void) {
	int num = 0;
	scanf("%d", &num);
	int count = 0;
	for (int i = 0; i < num; i++)
	{
		int currentNum = i + 1;
		while (true)
		{
			if (currentNum % 5 == 0)
			{
				count++;
				currentNum = currentNum / 5;
			}
			else {
				break;
			}
		}
		
	}
	cout << count << endl;
	return 0;
}