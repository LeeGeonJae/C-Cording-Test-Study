#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;

pair<int, int> pi;
tuple<int, int, int> tl;
int a, b, c;

int main()
{
	pi = make_pair(1, 2);
	a = pi.first;
	b = pi.second;
	cout << a << " : " << b << endl;

	tl = make_tuple(1, 1, 3);
	a = get<0>(tl);
	b = get<1>(tl);
	c = get<2>(tl);
	cout << a << " : " << b << " : " << c << endl;

	return 0;
}