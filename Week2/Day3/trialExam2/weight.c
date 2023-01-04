#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int weight[], int weight_len, int k) {
	int answer=0; // 값 초기화 필.
	for (int i = 0; i < weight_len; ++i)
		if (weight[i] > k)
			answer++;
	return answer;
}