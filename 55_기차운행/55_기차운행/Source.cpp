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
		scanf("%d", &temp);
		if (temp > findNum) {
			if (s.size() == 0)
			{
				s.push(temp);
				resultStr += "P";
			}
			else {
				if (temp == s.top())
				{

				}
				else {
					resultStr = "Impossible";
					break;
				}
			}
		}
		else if (temp < findNum) {
			//실패 한 경우
			resultStr = "Impossible";
			break;
		}
		else {
			resultStr += "PO";

		}
	}
	cout << resultStr << endl;
	return 0;
}