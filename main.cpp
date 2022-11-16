#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

int n = 5, k = 2, a[5] = { 1,2,3,4,5 };

int main()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			cout << i << " " << j << '\n';
		}
	}

	return 0;
}