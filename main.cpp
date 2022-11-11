#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>

using namespace std;

int main()
{
	queue<int> q;
	q.push(1);
	q.push(2);

	cout << q.front() << endl;
	cout << q.size() << endl;
	cout << q.back() << endl;

	q.pop();
	cout << q.size() << endl;

	return 0;
}