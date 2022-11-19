#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

int main()
{
	vector<int> a;
	for (int i = 1; i <= 3; i++) a.push_back(i);
	for (int i = 5; i <= 10; i++) a.push_back(i);
	cout << lower_bound(a.begin(), a.end(), 4) - a.begin() << '\n';

	return 0;
}