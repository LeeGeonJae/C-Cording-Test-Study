#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{
	vector<int> v;

	for (int i = 1; i <= 5; i++) v.push_back(i);
	for (int i = 0; i < 5; i++)
	{
		cout << i << "��° ��� : " << *(v.begin() + i) << endl;
		cout << &*(v.begin() + i) << endl;
	}
	// cout << v.begin() << endl; // ����

	return 0;
}