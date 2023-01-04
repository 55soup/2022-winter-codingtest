#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int* solution(int scores[], int scores_len) {
	int* answer = (int*)malloc(sizeof(int)*5); //A~F학점 까지 저장할 int포인터 변수
	memset(answer, 0, sizeof(int) * scores_len); //값 초기화

	for (int i = 0; i < scores_len; i++) {
		if (scores[i] >= 85) answer[0]++;
		else if (scores[i] >= 70) answer[1]++;
		else if (scores[i] >= 55) answer[2]++;
		else if (scores[i] >= 40) answer[3]++;
		else answer[4]++;
	}

	return answer;
}

void main() {
	//int scores[] = { 10,100,80,84,70,55,86,84 };
	int scores[] = { 86,72,98,60,45 };
	int scores_len = sizeof(scores) / sizeof(scores[0]);
	int* answer = solution(scores, scores_len);
	for (int i = 0; i < 5; i++) {
		printf("%d ", answer[i]);
	}
}
