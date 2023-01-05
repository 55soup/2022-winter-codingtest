#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* solution(int arr[], int arr_len) {
	int* answer = (int*)malloc(sizeof(int) * 3);

	for (int i = 0; i < 3; ++i) {
		answer[i] = 0;
		for (int k = 0; k < 4; ++k) {
			answer[i] += arr[i*4+k]; // 0,1,2,3 / 4,5,6,7 / 8,9,10,11
		}
	}
	return answer;
}

void main() {
	int arr[] = { 8,5,3,5,6,7,3,4,5,6,7,8 };
	// 수업별 인원자 수
	// [21,20,26]
	int* answer = solution(arr, 12);
	for (int i = 0; i < 3; ++i) {
		printf("%d ", answer[i]);
	}
}