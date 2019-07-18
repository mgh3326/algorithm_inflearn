#include<iostream>
#include<deque>
using namespace std;
int main(void)
{
	int n = 0;
	scanf("%d", &n);
	int temp = 0;
	int old = 0;
	bool* arr = new bool[n];
	string out = "YES";
	scanf("%d", &old);

	for (int i = 1; i < n; i++)
	{
		scanf("%d", &temp);
		if (arr[abs(old - temp)] == false || abs(old - temp)>n-1) {
			out = "NO";
			break;
		}
		arr[abs(old - temp)] = false;
		
		old = temp;

	}
	cout << out << endl;
	return 0;
}
