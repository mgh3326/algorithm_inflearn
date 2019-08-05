#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main(void) {
	string str;
	cin >> str;
	stack<char> s;
	for (int i = 0; i < str.length(); i++)
	{
		char temp = str[i];
		if (temp == '(')
		{
			s.push(temp);
		}
		else {
			if (s.size() == 0)
			{
				cout << "NO" << endl;
				return 0;
			}
			s.pop();
		}
	}
	if (s.size() == 0)
	{
		cout << "YES" << endl;

	}
	else {
		cout << "NO" << endl;

	}

	return 0;
}