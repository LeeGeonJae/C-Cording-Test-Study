#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Point
{
	int y, x;
};
bool cmp(const Point& a, const Point& b)
{
	cout << a.x << "a " << b.x << "b " << endl;
	return a.x > b.x;
}

int main()
{
	vector<Point> v;

	for (int i = 10; i >= 1; i--)
	{
		v.push_back({ i, 10 - i });
	}
	 sort(v.begin(), v.end(), cmp);
	for (auto it : v) cout << it.y << " : " << it.x << endl;

	return 0;
}