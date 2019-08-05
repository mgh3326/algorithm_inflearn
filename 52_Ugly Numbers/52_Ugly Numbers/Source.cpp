#include<iostream>
using namespace std;
int main(void) {
	int num = 0;
	scanf("%d", &num);
	int* arr = new int[num];
	arr[0] = 1;
	//Ugly number create
	int count = 1;
	int result = 0;
	struct Index
	{
		int two = 0;
		int three = 0;
		int five = 0;
	} index;
	Index temp;


	while (true) {

		temp.two = arr[index.two] * 2;
		temp.three = arr[index.three] * 3;
		temp.five = arr[index.five] * 5;
		if (temp.two >= temp.three && temp.three > temp.five)
		{
			index.five++;
			arr[count] = temp.five;
		}
		else if (temp.two >= temp.five && temp.five > temp.three)
		{
			index.three++;
			arr[count] = temp.three;

		}
		else if (temp.two > temp.five && temp.five == temp.three)
		{
			index.five++;
			index.three++;
			arr[count] = temp.three;

		}
		else if (temp.three >= temp.two && temp.two > temp.five)
		{
			index.five++;
			arr[count] = temp.five;

		}
		else if (temp.three >= temp.five && temp.five > temp.two)
		{
			index.two++;
			arr[count] = temp.two;

		}
		else if (temp.three > temp.five && temp.five == temp.two)
		{
			index.two++;
			index.five++;
			arr[count] = temp.two;
		}
		else if (temp.five >= temp.two && temp.two > temp.three)
		{
			index.three++;
			arr[count] = temp.three;

		}
		else if (temp.five >= temp.three && temp.three > temp.two)
		{
			index.two++;
			arr[count] = temp.two;

		}
		else if (temp.five > temp.three && temp.three == temp.two)
		{
			index.two++;
			index.three++;
			arr[count] = temp.two;
		}
		else if (temp.five == temp.three && temp.three == temp.two)
		{
			index.three++;
			index.two++;
			index.five++;
			arr[count] = temp.two;
		}
		else {
			cout << "error!" << endl;
		}
		count++;

		if (count == num)
		{
			break;
		}
	}
	cout << arr[num - 1];
	return 0;
}