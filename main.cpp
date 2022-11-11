#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>

using namespace std;

int main()
{
	deque<int> dp;
	dp.push_front(1);
	dp.push_back(2);
	dp.push_back(3);
	cout << dp.front() << endl;
	cout << dp.back() << endl;
	cout << dp.size() << endl;
	dp.pop_back();
	dp.pop_front();
	cout << dp.size() << endl;
	cout << dp.front() << endl;

	return 0;
}