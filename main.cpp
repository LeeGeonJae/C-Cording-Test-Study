#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>

using namespace std;

int main()
{
	stack<string> stk;
	stk.push("��");
	stk.push("��");
	stk.push("��");
	stk.push("ȭ");
	stk.push("��");
	stk.push("��");

	while (stk.size())
	{
		cout << stk.top() << endl;
		stk.pop();
	}

	return 0;
}