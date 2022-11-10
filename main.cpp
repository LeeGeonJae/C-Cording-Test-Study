#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	double ret = 2.12345;
	int n = 2;
	int a = (int)round(ret / double(n));

	cout << a << "\n";

	cout << round(ret) << endl;
	cout << (int)ret << endl;
	cout << (double)n << endl;
	cout << double(n) << endl;

	return 0;
}