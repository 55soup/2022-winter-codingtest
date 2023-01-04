#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main() {
	int scores[] = { 50,90,65,100 };
	int scores_len = sizeof(scores) / sizeof(scores[0]);
	int answer=solution(scores, scores_len);
	printf("답: %d", answer);
}

int solution(int scores[], int scores_len) {
	int sum = func_b(scores, scores_len);
	int max_score = func_a(scores, scores_len);
	int min_score = func_c(scores, scores_len);
	return sum - max_score - min_score;
}

int func_a(int s[], int arr_size) { // 최대값 구하는 함수
	int ret = 0;
	for (int i = 0; i < arr_size; i++)
		if (s[i] > ret)
			ret = s[i];
	return ret;
}

int func_b(int s[], int arr_size) { // 점수 합계 구하는 함수
	int ret = 0;
	for (int i = 0; i < arr_size; i++)
		ret += s[i];
	return ret;
}

int func_c(int s[], int arr_size) { // 최솟값 구하는 함수
	int ret = 101;
	for (int i = 0; i < arr_size; i++)
		if (s[i] < ret)
			ret = s[i];
	return ret;
}