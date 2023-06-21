#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
	int answer = 0;

	for (size_t i = 0; i < a.size(); i++)
	{
		answer += a[i] * b[i];
	}

	return answer;
}

int main()
{
	vector<int> a;
	vector<int> b;
	int c;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	b.push_back(-3);
	b.push_back(-1);
	b.push_back(0);
	b.push_back(2);

	c = solution(a, b);

	cout << c << endl;

	return 0;
}