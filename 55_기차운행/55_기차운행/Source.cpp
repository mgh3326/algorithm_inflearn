#include<iostream>
#include<stack>
using namespace std;
int main(void) {
	int num = 0;
	scanf("%d", &num);
	stack<int> s;
	int* arr = new int[num];
	int findNum = 1;
	int temp = 0;
	string resultStr = "";
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < num; i++)
	{
		temp = arr[i];
		if (temp > findNum) {
			if (s.size() == 0)
			{
				s.push(temp);
				resultStr += "P";
			}
			else {
				if (findNum == s.top())
				{
					resultStr += "O";
					s.pop();
					findNum++;
					i--;
					continue;
				}
				else if (findNum < s.top())
				{
					s.push(temp);
					resultStr += "P";
				}
				else {
					resultStr = "impossible";
					cout << resultStr << endl;
					return 0;
				}
			}
		}
		else if (temp < findNum) {
			//실패 한 경우
			resultStr = "impossible";
			cout << resultStr << endl;

			return 0;
		}
		else {
			resultStr += "PO";
			findNum++;
		}
	}
	while (s.size() != 0)
	{
		if (findNum == s.top())
		{
			resultStr += "O";
			s.pop();
			findNum++;
			continue;
		}
		else {
			resultStr = "impossible";
			cout << resultStr << endl;
			return 0;
		}
	}
	cout << resultStr << endl;
	return 0;
}