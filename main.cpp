#include <iostream>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
	int answer = 0;
	int dx, dy;

	for (size_t i = 0; i < dots.size(); i++)
	{
		for (size_t j = 0; j < dots[i].size(); j++)
		{
			if (dots[i][0] != dots[j][0])
				dx = dots[i][0] - dots[j][0];
			if (dots[i][1] != dots[j][1])
				dy = dots[i][1] - dots[j][1];
		}
	}

	answer = abs(dx) * abs(dy);

	return answer;
}

int main()
{


	return 0;
}