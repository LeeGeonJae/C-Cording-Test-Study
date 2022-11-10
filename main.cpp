#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a = -1;
	cout << bool(a) << endl;
	a = 0;
	cout << bool(a) << endl;
	a = 3;
	cout << bool(a) << endl;
}