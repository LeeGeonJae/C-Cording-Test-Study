#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

char a[10][10];

int main()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf_s(" %c", &a[i][j]);
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << a[i][j];
		}
		cout << endl;
	}

	return 0;
}