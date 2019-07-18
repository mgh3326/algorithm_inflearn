#include <iostream>
#include <map>
#include <string>

using namespace std;


int main(void) {
	string str= "";
	string out = "YES";
	map< char, int > m;
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		m[str[i]]++;
	}
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		m[str[i]]--;
		if (m[str[i]] < 0)
		{
			out = "NO";
			break;
		}
		if (m[str[i]] == 0)
		{
			m.erase(str[i]);
		}
	}
	if (m.size() > 0)
	{
		out = "NO";

	}
	std::cout << out;
	printf("\n");
	return 0;
}