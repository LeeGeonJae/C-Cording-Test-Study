#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string a = "abcda";
	string *b = &a;
	cout << b << endl;
	cout << *b << endl;

	return 0;
}