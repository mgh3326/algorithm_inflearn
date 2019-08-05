#include<iostream>
#include<stack>
using namespace std;
int main(void) {
	stack<int> s;
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	while (true) {
		if (n % k == 0) {
			s.push(0);
		}
		else {
			s.push(n % k);
		}
		n = int(n / k);
		if (n == 0)
			break;
	}
	while (s.size() != 0) {
		if (s.top() >= 10)
		{
			char res = 'A';
			cout << char(res + s.top()-10);
		}
		else
		{
			cout << s.top();
		}
		s.pop();
	}
	cout << endl;
	return 0;
}