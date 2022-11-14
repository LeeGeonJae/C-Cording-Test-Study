#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

void printV(vector<int>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

int main()
{
	int a[3] = { 1, 2, 3 };
	vector<int> v;

	for (int i = 0; i < 3; i++) v.push_back(a[i]);

	return 0;
}