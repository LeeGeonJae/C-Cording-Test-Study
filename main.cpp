#include <iostream>
#include <string>
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

bool CheckCollision(const Point& _PlayerPoint, const Point& _p1, const Point& _p2, bool& _LineSegment)
{
	Point PlayerRight;
	PlayerRight.y = _PlayerPoint.y + 1;
	PlayerRight.x = 1000000001;

 	int std1 = CCW(_PlayerPoint, PlayerRight, _p1) * CCW(_PlayerPoint, PlayerRight, _p2);
	int std2 = CCW(_p1, _p2, _PlayerPoint) * CCW(_p1, _p2, PlayerRight);

	if (std1 <= 0 && std2 <= 0)
	{
		if (std2 == 0)
		{
			Point tempPlayer = _PlayerPoint;
			Point tempP1 = _p1;
			Point tempP2 = _p2;

			if (tempP2 <= tempP1) swap(tempP1, tempP2);

 			if (tempPlayer <= tempP2 && tempP1 <= tempPlayer)
			{
				_LineSegment = true;
				return true;
			}
			else
				return false;
		}
		else return true;
	}
	else return false;
}

int main()
{
	vector<Point> PolygonPoint;
	vector<Point> PlayerPoint;
	int PointCount;
	int CheckCollisionNumber[3] = {0};
	bool Collision[3] = { 0 };

	cin >> PointCount;

	for (int i = 0; i < PointCount; i++)
	{
		Point a;
		cin >> a.x >> a.y;
		PolygonPoint.push_back(a);
	}

	for (int i = 0; i < 3; i++)
	{
		Point a;
		cin >> a.x >> a.y;
		PlayerPoint.push_back(a);
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < PointCount; j++)
		{
			if (CheckCollision(PlayerPoint[i], PolygonPoint[j], PolygonPoint[(j + 1) % PointCount], Collision[i]))
			{
				CheckCollisionNumber[i]++;
			}

			if (PlayerPoint[i].x == PolygonPoint[j].x && PlayerPoint[i].y == PolygonPoint[j].y)
			{
				Collision[i] = true;
				break;
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		if ((CheckCollisionNumber[i] % 2 == 1) || Collision[i] == true)
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}

	return 0;
}