#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>

using namespace std;

int main()
{
	stack<string> stk;
	stk.push("엄");
	stk.push("준");
	stk.push("신");
	stk.push("화");
	stk.push("이");
	stk.push("팅");

	while (stk.size())
	{
		cout << stk.top() << endl;
		stk.pop();
	}

	return 0;
}