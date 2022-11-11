#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

map<string, int> mp;

int main()
{
	// �̷��� �ֱ⵵ �����ϰ�
	mp.insert({ "test1", 1 });

	// �̷��� ���� ���� �ֽ��ϴ�.
	mp.emplace("test5", 5);

	// ���� �̷��� ���浵 ����, �߰��� ���� �ֽ��ϴ�. �Ʒ��� �����մϴ�.
	mp["test1"] = 4;

	for (auto element : mp)
	{
		cout << element.first << " : : " << element.second << endl;
	}

	// map�� find�޼ҵ�� ã�� ���ϸ� end() ���ͷ����͸� ��ȯ�մϴ�.
	auto search = mp.find("test4");
	if (search != mp.end())
	{
		cout << "found : " << search->first << " " << (*search).second << endl;
	}
	else
	{
		cout << "not found.." << endl;
	}
	
	// �̷� ������ �ٷ� int���� ������ų �� �ֽ��ϴ�.
	mp["test1"]++;
	cout << mp["test1"] << endl;

	cout << mp.size() << endl;
	mp.erase("test1");
	cout << mp.size() << endl;

	return 0;
}