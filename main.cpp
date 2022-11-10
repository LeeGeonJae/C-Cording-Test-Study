#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		// vector.push_back(i) 뒤부터 i요소를 더하겠다.
		v.push_back(i);
	}

	for (int a : v)
	{
		cout << a << " ";
	}
	cout << endl;

	// vector.pop_back(); 맨 뒤부터 지우는 함수
	v.pop_back();
	for (int a : v)
	{
		cout << a << " ";
	}
	cout << endl;

	// vector.erase(처음 자리 수, 마지막 자리 수)
	v.erase(v.begin(), v.begin() + 1);
	for (int a : v)
	{
		cout << a << " ";
	}
	cout << endl;

	// find(처음 자리 수, 마지막 자리 수, ?)
	auto a = find(v.begin(), v.end(), 100);
	if (a == v.end())
	{
		cout << "not found" << endl;
	}

	// fill (처음 자리 수, 마지막 자리 수, 채울 값)
	fill(v.begin(), v.end(), 10);
	for (int a : v)
	{
		cout << a << " ";
	}
	cout << endl;

	// vector.clear()함수 
	v.clear();
	cout << "아무것도 없을까?" << endl;
	for (int a : v)
	{
		cout << a << " ";
	}
	cout << endl;

	return 0;
}