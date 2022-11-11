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
	// 이렇게 넣기도 가능하고
	mp.insert({ "test1", 1 });

	// 이렇게 넣을 수도 있습니다.
	mp.emplace("test5", 5);

	// 또한 이렇게 변경도 가능, 추가할 수도 있습니다. 아래를 권장합니다.
	mp["test1"] = 4;

	for (auto element : mp)
	{
		cout << element.first << " : : " << element.second << endl;
	}

	// map의 find메소드는 찾지 못하면 end() 이터레이터를 반환합니다.
	auto search = mp.find("test4");
	if (search != mp.end())
	{
		cout << "found : " << search->first << " " << (*search).second << endl;
	}
	else
	{
		cout << "not found.." << endl;
	}
	
	// 이런 식으로 바로 int형을 증가시킬 수 있습니다.
	mp["test1"]++;
	cout << mp["test1"] << endl;

	cout << mp.size() << endl;
	mp.erase("test1");
	cout << mp.size() << endl;

	return 0;
}