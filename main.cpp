#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int n, m, a[10][10];
string s;

int main()
{
	// 4 4�� �Է�
	// n = 4, m = 4
	cin >> n >> m;

	// ���ڿ��� 1000, 0000, 0111, 0000�� n(4)�� �Է� �޴´�.
	for (int i = 0; i < n; i++)
	{
		cin >> s;

		// s[j]�� string�� char�� �����Ѵ�.
		// �̶� ���ڴ� �����ڵ�� ���Ǳ� ������ char'0' = int 48�� �ȴ�.
		// �׷��� ������ '0'�� ����
		// ��) '1' - '0' = 49 - 48 = 1�� �ȴ�.
		// �̸� m(4)�� int a�� �迭�� �־��ش�.
		for (int j = 0; j < m; j++)
		{
			a[i][j] = s[j] -'0';
		}
	}

	// �̸� for������ j�������� �ϳ��ϳ��� ǥ���� ������
	// cout << endl;�� �� �Ŀ� ���� i�迭�� �Ѿ j�������� ���ڸ� ǥ���Ѵ�.
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