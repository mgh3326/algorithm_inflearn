#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
	int num = 0;
	scanf("%d", &num);
	vector<int> v;
	int temp = 0;
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &temp);
		for (int j = 0; j < v.size(); j++)
		{
			if (v.at(j) <= temp)
			{
				v.erase(v.begin() + j);
				j--;
			}
		}
		if (i == num - 1)
			break;
		v.push_back(temp);

	}
	cout << v.size() << endl;
	return 0;
}