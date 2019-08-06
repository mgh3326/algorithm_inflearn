#include<iostream>
using namespace std;
void ToBinary(int num) {
	if (num == 1)
	{
		cout << num;
		return;
	}
	else {
		int res =  0;
		if (num % 2 == 0)
		{
			res = 0;
		}
		else {
			res = 1;

		}
		num = int(num / 2);

		ToBinary(num);
		cout << res ;
	}
}
int main(void) {
	int num = 0;
	cin >> num;
	ToBinary(num);
	cout << endl;
	return 0;
}