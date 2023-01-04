#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int* solution(int arr[][4], int n) { // n은 배열의 세로 길이
	int* answer;
	answer = (int*)malloc(sizeof(int) * 1000);
	int avg=0,index=0;
	// 평균 구하기
	int row = sizeof(arr) / sizeof(arr[0]);

	printf("%d", row);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			avg += arr[i][j];
		}
	}
	avg /= 16; // 평균값 구하기

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			if (arr[i][j] < avg)
				answer[index++] = arr[i][j];
		}
	}
	answer[index] = '\0'; // 마지막 인덱스에 NULL문자 삽입
	// 평균보다 작은 값 구하고 배열에 넣기
	return answer;
}

void main() {
	int arr[4][4] = {{5,12,4,31},{24,13,11,2},{43,44,19,26},{33,65,20,21}};
	int* answer = solution(arr, 4);
	for (int i = 0; answer[i] != 0; i++)
		printf("%d  ", answer[i]);
}
