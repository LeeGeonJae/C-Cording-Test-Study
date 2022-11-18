#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

int main()
{
	vector<int> v;
	int a[5] = { 1,2,2,2,3 };
	for (int i = 0; i < 5; i++)
	{
		v.push_back(a[i]);
	}

	int x = 2;
	int c = (int)(upper_bound(v.begin(), v.end(), x) - lower_bound(v.begin(), v.end(), x));
	int f = (int)(lower_bound(v.begin(), v.end(), x) - v.begin());
	int t = (int)(upper_bound(v.begin(), v.end(), x) - v.begin());
	int f2 = *lower_bound(v.begin(), v.end(), x);
	int t2 = *upper_bound(v.begin(), v.end(), x);

	cout << x << "의 갯수 : " << c << ", 시작되는 점 : " << f << "끝나는 점 : " << t << '\n';
	cout << "lower bound가 시작되는 점의 값 : " << f2 << ", upper bound가 시작되는 점의 값 : " << t2 << '\n';

	c = (int)(upper_bound(a, a + 5, x) - lower_bound(a, a + 5, x));
	f = (int)(lower_bound(a, a + 5, x) - a);
	t = (int)(upper_bound(a, a + 5, x) - a);
	f2 = *lower_bound(a, a + 5, x);
	t2 = *upper_bound(a, a + 5, x);

	cout << x << "의 갯수 : " << c << ", 시작되는 점 : " << f << " 끝나는 점 : " << t << '\n';
	cout << "lower bound가 시작되는 점의 값 : " << f2 << ", upper bound가 시작되는 점의 값 : " << t2 << '\n';

	return 0;
}