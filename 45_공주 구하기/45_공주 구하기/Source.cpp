#include<iostream>
#include<vector>
using namespace std;
// 이진 탐색 알고리즘 반복문 구현
// 찾는 숫자가 있으면 찾는 숫자의 인덱스 리턴 없으면 -1 리턴

int main(void) {
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	vector<int> v;
	for (int i = 0; i < n; i++) {
		v.push_back(i + 1);
	}
	int index = 0;
	int count = 0;
	while (v.size() > 1) {
		
		index++;
		count++;
		if (index >= v.size())
		{
			index = index- v.size();
		}
		if (count%(k-1)==0) {
			v.erase(v.begin() + index);
		}
	}


	cout << v[0] << endl;
	return 0;
}