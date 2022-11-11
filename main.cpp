#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;

vector<int> v;

int main()
{
	for (int i = 1; i <= 5; i++)
	{
		v.push_back(i);
		v.push_back(i);
	}
	for (int i = 5; i >= 1; i--)
	{
		v.push_back(i);
		v.push_back(i);
	}
	sort(v.begin(), v.end());
	for (int i : v) cout << i << " ";
	cout << endl;

	v.erase(unique(v.begin(), v.end()), v.end());
	for (int i : v) cout << i << " ";

	return 0;
}