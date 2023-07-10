#include <iostream>
#include <vector>

using namespace std;

struct Point
{
	long long x, y;

	bool operator<=(const Point& _p)
	{
		if (x == _p.x)
			return y <= _p.y;
		return x <= _p.x;
	}
};

struct Line
{
	Point p1, p2;
};

int CCW(const Point& _p1, const Point& _p2, const Point& _p3)
{
	long long x1 = (_p2.x - _p1.x);
	long long y1 = (_p2.y - _p1.y);
	long long x2 = (_p3.x - _p1.x);
	long long y2 = (_p3.y - _p1.y);

	long long res = x1 * y2 - x2 * y1;

	if (res > 0) return 1;			// 반시계 방향
	else if (res < 0) return -1;	// 시계 방향
	else return 0;					// 일직선
}

int main()
{
	Line l1, l2;
	bool Check = false;

	cin >> l1.p1.x >> l1.p1.y >> l1.p2.x >> l1.p2.y >> l2.p1.x >> l2.p1.y >> l2.p2.x >> l2.p2.y;

	int std1 = CCW(l1.p1, l1.p2, l2.p1) * CCW(l1.p1, l1.p2, l2.p2);
	int std2 = CCW(l2.p1, l2.p2, l1.p1) * CCW(l2.p1, l2.p2, l1.p2);

	if (std1 <= 0 && std2 <= 0)
	{
		if (std1 == 0 && std2 == 0)
		{
			if (l1.p2 <= l1.p1) swap(l1.p1, l1.p2);
			if (l2.p2 <= l2.p1) swap(l2.p1, l2.p2);

			if (l1.p1 <= l2.p2 && l2.p1 <= l1.p2)
				Check = true;
			else
				Check = false;
		}
		else Check = true;
	}
	else Check = false;

	if (Check)
		cout << 1 << endl;
	else
		cout << 0 << endl;

	return 0;
}