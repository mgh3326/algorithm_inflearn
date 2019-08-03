#include<iostream>
int main(void) {
	int num = 0;
	int temp = 0;
	scanf("%d", &num);
	int* arr = new int[num];
	for (int i = 0; i < num; i++)
	{
		arr[i] = num + 1;
	}
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &temp);
		for (int j = 0; j < num; j++)
		{
			if (temp == 0)
			{
				while (true) {
					if (arr[j] == num+1) {
						break;
					}
					j++;
				}
				arr[j] = i + 1;
				break;
			}

			if (arr[j] > i + 1)
			{
				temp--;
			}
		}
	}
	for (int i = 0; i < num; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}