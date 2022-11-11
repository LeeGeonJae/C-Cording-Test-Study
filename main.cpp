#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

map<int, int> mp;
map<string, string> mp2;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	if (mp[1] == 0)
	{
		mp[1] = 2;
	}
	for (auto i : mp) cout << i.first << " " << i.second;

	return 0;
}