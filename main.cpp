#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	double a = 1.23456789;

	cout << a << endl;
	cout.precision(7);
	cout << a << endl;

	return 0;
}