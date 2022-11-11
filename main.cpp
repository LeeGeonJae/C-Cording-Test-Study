#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;

vector<int> a;
int b[5];

int main()
{
	for (int i = 5; i >= 1; i--)
	{
		b[i - 1] = i;
	}
	for (int i = 5; i >= 1; i--)
	{
		a.push_back(i);
	}

	// 오름차순
	sort(b, b + 5);
	sort(a.begin(), a.end());
	for (int i : b) cout << i << ' ';
	cout << endl;
	for (int i : a) cout << i << ' ';
	cout << endl;

	sort(b, b + 5, less<int>());
	sort(a.begin(), a.end(), less<int>());
	for (int i : b) cout << i << ' ';
	cout << endl;
	for (int i : a) cout << i << ' ';
	cout << endl;

	// 내림차순
	sort(b, b + 5, greater<int>());
	sort(a.begin(), a.end(), greater<int>());
	for (int i : b) cout << i << ' ';
	cout << endl;
	for (int i : a) cout << i << ' ';
	cout << endl;
	
	return 0;
}