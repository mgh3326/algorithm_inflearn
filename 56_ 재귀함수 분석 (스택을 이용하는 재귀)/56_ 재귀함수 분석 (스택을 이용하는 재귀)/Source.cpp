#include<iostream>
using namespace std;
void recur(int num) {
	if (num == 0)
		return;
	else {
		recur(num - 1);
		cout << num << " ";
	}
}
int main(void) {
	int num = 0;
	cin >> num;
	recur(num);
	cout << endl;
	return 0;
}