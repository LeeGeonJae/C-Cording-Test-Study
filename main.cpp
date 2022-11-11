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
	pi = { 1, 2 };
	tl = make_tuple(1, 1, 3);

	tie(a, b) = pi;
	cout << a << " : " << b << endl;

	tie(a, b, c) = tl;
	cout << a << " : " << b << " : " << c << endl;

	return 0;
}