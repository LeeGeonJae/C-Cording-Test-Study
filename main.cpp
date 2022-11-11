#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>

using namespace std;

void go(int a[])
{
	a[1] = 100;
}
int a[3] = { 1,2,3 };

int main()
{
	go(a);

	for (int i : a) cout << i << endl;
	
	return 0;
}