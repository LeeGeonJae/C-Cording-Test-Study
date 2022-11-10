#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// vector �ʱ�ȭ�ϱ�

// vector 10���� �����մϴ�.
vector<int> v[10];

// ũ�� 10 * 10, �ʱⰪ�� 0�� 2���� vector �����
vector<int> v2(10, 0);

// vector�� 2���� �迭 �����
vector<vector<int>> v4;

// �迭�ʱ�ȭ shortcut : ��ü 0���� �ʱ�ȭ�Ѵ�.
// �Ϻ� �����Ϸ����� ������ ���� ���� ������ ���� �ʴ� ���� �����ϴ�.

int dp[10] = { 0, };
int dp2[10][10] = { {0, } };

const int MAX_N = 100;
int dist[MAX_N];
int dist2[MAX_N][MAX_N];

//0��°��� : 0, 1��°��� : 1�� �ʱ�ȭ
int a[10] = { 0,1 };

int main()
{
	// vector v�� 0���� �ʱ�ȭ
	fill(v2.begin(), v2.end(), 0);

	// memset : 0, -1, �ѹ��ڷθ� �ʱ�ȭ ����
	memset(v, 0, sizeof(v));

	// �迭 dist �ʱ�ȭ, �ִ�ġ���� �ʱ�ȭ�ϴ� �� �ָ�!
	fill(dist, dist + MAX_N, 0);

	// fill�� ����� 2���� �迭 �ʱ�ȭ��� 1
	for (int i = 0; i < MAX_N; i++)
	{
		fill(dist2[i], dist2[i] + MAX_N, 0);
	}

	// fill�� ����� 2���� �迭 �ʱ�ȭ��� 2 ( �̰� ��õ�մϴ�. )
	fill(&dist2[0][0], &dist2[0][0] + MAX_N*MAX_N, 0);
	
	return 0;
}