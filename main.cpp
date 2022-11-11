#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main()
{
	multiset<int> s;
	s.insert(12);
	s.insert(10);
	s.insert(2);
	s.insert(10);
	s.insert(90);
	s.insert(85);
	s.insert(45);

	cout << "Multiset elements after sort" << endl;
	for (auto it = s.begin(); it != s.end(); it++)
		cout << *it << ' ';
	cout << endl;

	auto it1 = s.find(10);
	auto it2 = s.find(90);

	// elements from 10 to elements befor 90
	// erased
	s.erase(it1, it2);

	cout << "Multiset Elements after erase" << endl;

	for (auto it = s.begin(); it != s.end(); it++)
		cout << (*it) << ' ';
	s.erase(s.begin());
	cout << endl;
	for (auto it = s.begin(); it != s.end(); it++)
		cout << (*it) << ' ';

	return 0;
}