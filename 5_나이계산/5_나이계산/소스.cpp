#include<iostream>
using namespace std;
int main(void) {
	int first = 0;
	int second = 0;
	scanf("%d-%d", &first,&second);
	first = first / 10000;
	second= second / 1000000;
	int age = 119 - first +1;
	char sex = 'M';
	if (second % 2 == 0)
	{
		sex = 'W';
	}
	if (second > 2)
	{
		age -= 100;
	}
	printf("%d %c\n", age,sex);
	return 0;

}