#include<iostream>
#include<queue>
using namespace std;
int main(void) {
	priority_queue<int> pQ;
	int temp = 0;
	while (true) {
		cin >> temp;
		if (temp == 0)
		{
			cout << pQ.top() << endl;
			pQ.pop();
		}
		else if (temp == -1)
		{
			return 0;
		}
		else {
			pQ.push(temp);
		}
	}
	return 0;
}