#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int weight[], int weight_len, int k) {
	int answer=0; // �� �ʱ�ȭ ��.
	for (int i = 0; i < weight_len; ++i)
		if (weight[i] > k)
			answer++;
	return answer;
}