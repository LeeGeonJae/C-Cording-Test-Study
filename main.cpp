#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void f(vector<vector<int>> &v)
{
	vector<int> vv;
	vv.push_back(10000);
	vv.push_back(999);
	v.push_back(vv);
}

int main()
{
	vector<vector<int>> v;
	f(v);

	for (int i : v[0])
	{
		cout << i << " ";
	}

	return 0;
}