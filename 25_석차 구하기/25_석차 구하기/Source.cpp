#include<iostream>
#include<map>
using namespace std;
int main(void)
{
	int n = 0;
	scanf("%d", &n);
	map<int,int> m;
	int temp = 0;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		m[arr[i]]++;
	}
	temp = 0;
	map<int, int> result;
	int old =1;
	for (auto iter = m.rbegin(); iter != m.rend(); ++iter) {
		result[iter->first] = old;
		temp += iter->second ;
		old = temp+1;
	}
	for (int i = 0; i < n; i++)
	{
		cout << result[arr[i]] << " ";
	}
	cout << endl;
	return 0;
}
