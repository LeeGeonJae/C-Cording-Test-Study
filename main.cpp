#include <iostream>
#include <string>

using namespace std;

string dopa = "amumu is best";

int main()
{
	cout << dopa << endl;
	if (dopa.find("amumu") != string::npos)
	{
		cout << "dopa�ӿ� �ƹ����ִ�!" << endl;
	}
	cout << dopa.substr(0, 3) << endl;
	reverse(dopa.begin(), dopa.end());
	cout << dopa << endl;

	return 0;
}