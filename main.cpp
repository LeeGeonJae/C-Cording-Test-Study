#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// vector 초기화하기

// vector 10개를 생성합니다.
vector<int> v[10];

// 크기 10 * 10, 초기값은 0인 2차원 vector 만들기
vector<int> v2(10, 0);

// vector로 2차원 배열 만들기
vector<vector<int>> v4;

// 배열초기화 shortcut : 전체 0으로 초기화한다.
// 일부 컴파일러에서 통하지 않을 수도 있으니 쓰지 않는 것이 좋습니다.

int dp[10] = { 0, };
int dp2[10][10] = { {0, } };

const int MAX_N = 100;
int dist[MAX_N];
int dist2[MAX_N][MAX_N];

//0번째요소 : 0, 1번째요소 : 1로 초기화
int a[10] = { 0,1 };

int main()
{
	// vector v를 0으로 초기화
	fill(v2.begin(), v2.end(), 0);

	// memset : 0, -1, 한문자로만 초기화 가능
	memset(v, 0, sizeof(v));

	// 배열 dist 초기화, 최대치까지 초기화하는 거 주목!
	fill(dist, dist + MAX_N, 0);

	// fill을 사용한 2차원 배열 초기화방법 1
	for (int i = 0; i < MAX_N; i++)
	{
		fill(dist2[i], dist2[i] + MAX_N, 0);
	}

	// fill을 사용한 2차원 배열 초기화방법 2 ( 이걸 추천합니다. )
	fill(&dist2[0][0], &dist2[0][0] + MAX_N*MAX_N, 0);
	
	return 0;
}