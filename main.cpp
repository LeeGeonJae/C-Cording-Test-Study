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
		// vector.push_back(i) �ں��� i��Ҹ� ���ϰڴ�.
		v.push_back(i);
	}

	for (int a : v)
	{
		cout << a << " ";
	}
	cout << endl;

	// vector.pop_back(); �� �ں��� ����� �Լ�
	v.pop_back();
	for (int a : v)
	{
		cout << a << " ";
	}
	cout << endl;

	// vector.erase(ó�� �ڸ� ��, ������ �ڸ� ��)
	v.erase(v.begin(), v.begin() + 1);
	for (int a : v)
	{
		cout << a << " ";
	}
	cout << endl;

	// find(ó�� �ڸ� ��, ������ �ڸ� ��, ?)
	auto a = find(v.begin(), v.end(), 100);
	if (a == v.end())
	{
		cout << "not found" << endl;
	}

	// fill (ó�� �ڸ� ��, ������ �ڸ� ��, ä�� ��)
	fill(v.begin(), v.end(), 10);
	for (int a : v)
	{
		cout << a << " ";
	}
	cout << endl;

	// vector.clear()�Լ� 
	v.clear();
	cout << "�ƹ��͵� ������?" << endl;
	for (int a : v)
	{
		cout << a << " ";
	}
	cout << endl;

	return 0;
}