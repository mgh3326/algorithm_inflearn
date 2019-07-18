#include<iostream>
using namespace std;

int main(void) {
	int num = 0;
	string str = "";
	string cStr = "";
	string hStr = "";
	cin >> str;

	bool isHStart = false;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'C') {
			continue;
		}
		else if (str[i] == 'H') {
			isHStart = true;
			continue;
		}
		else {
			if (isHStart == false)
			{
				cStr += str[i];
			}
			else {
				hStr += str[i];
			}
		}
	}
	int cIntValue = atoi(cStr.c_str());
	int hIntValue = atoi(hStr.c_str());

	if (cIntValue == 0)
		cIntValue = 1;
	if (hIntValue == 0)
		hIntValue = 1;
	int result = 12 * cIntValue + 1 * hIntValue;
	cout << result;
	cout << "\n";
	return 0;
}