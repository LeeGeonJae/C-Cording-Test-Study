#include <iostream>
#include <string>

using namespace std;

string dopa = "amumu is best";

int main()
{
	cout << dopa << endl;
	if (dopa.find("amumu") != string::npos)
	{
		cout << "dopa속에 아무무있다!" << endl;
	}
	cout << dopa.substr(0, 3) << endl;
	reverse(dopa.begin(), dopa.end());
	cout << dopa << endl;

	return 0;
}