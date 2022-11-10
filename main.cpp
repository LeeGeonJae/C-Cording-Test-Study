#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int n, m, a[10][10];
string s;

int main()
{
	// 4 4를 입력
	// n = 4, m = 4
	cin >> n >> m;

	// 문자열로 1000, 0000, 0111, 0000를 n(4)번 입력 받는다.
	for (int i = 0; i < n; i++)
	{
		cin >> s;

		// s[j]로 string을 char로 변형한다.
		// 이때 숫자는 유니코드로 계산되기 때문에 char'0' = int 48이 된다.
		// 그렇기 때문에 '0'을 빼면
		// 예) '1' - '0' = 49 - 48 = 1이 된다.
		// 이를 m(4)번 int a의 배열에 넣어준다.
		for (int j = 0; j < m; j++)
		{
			a[i][j] = s[j] -'0';
		}
	}

	// 이를 for문으로 j방향으로 하나하나씩 표현한 다음에
	// cout << endl;로 띄어쓴 후에 다음 i배열로 넘어가 j방향으로 숫자를 표현한다.
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << a[i][j];
		}
		cout << endl;
	}

	return 0;
}