#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* solution(int scores[], int scores_len) {
	int* grade_counter = (int*)malloc(sizeof(int) * 5); // A~F학점 까지 5
	for (int i = 0; i<5; i++) // int포인터 초기화
		grade_counter[i]=0;
	for (int i = 0; i < scores_len; i++) {
		if (scores[i] >= 85)
			grade_counter[0] += 1;
		else if (scores[i] >= 70)
			grade_counter[1] += 1;
		else if (scores[i] >= 55)
			grade_counter[2] += 1;
		else if (scores[i] >= 40)
			grade_counter[3] += 1;
		else
			grade_counter[4] += 1;
	}
	return grade_counter;
}

void main() {
	int scores[] = {85,99,100,23,50,80};
	int scores_len = sizeof(scores) / sizeof(scores[0]);
	int* answer = solution(scores, scores_len);
	printf("{85,99,100,23,50,80} 학점: \n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", answer[i]);
	}
}