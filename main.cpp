#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

//� �������� �ֽ��ϴ�.
//�� �������� ������ ���ʴ�� ���� ���� �迭 absolutes�� �� �������� ��ȣ�� ���ʴ�� ���� �Ҹ��� �迭 signs�� �Ű������� �־����ϴ�.
//���� �������� ���� ���Ͽ� return �ϵ��� solution �Լ��� �ϼ����ּ���.

int solution(vector<int> absolutes, vector<bool> signs) {
	int answer = 0;
	int j = 0;

	for (int i : absolutes)
	{
		if (*(signs.begin() + j))
		{
			answer = answer + i;
		}
		else
		{
			answer = answer - i;
		}
		j = j + 1;
	}
	return answer;
}