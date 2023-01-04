#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int func_a(int arr[], int len) {
	int total = 0;
	for (int i = 0; i < len; ++i)
		total += arr[i];
	return total;
}

int* solution(int total, int arr[], int arr_len) {
	int* result = (int*)malloc(sizeof(int) * arr_len);
	int req_total = func_a(arr, arr_len);
	if (req_total > total) {
		for (int i = 0; i < arr_len; i++) {
			result[i] = total / arr_len;
		}
	}
	else {
		for (int i = 0; i < arr_len; i++) {
			result[i] = arr[i];
		}
	}
	return result;
}

void main() {
	int arr[] = { 120,110,70,150 }; // 예산안에 든경우
	int arr2[] = { 200,110,140,150 }; // 예산안에 벗어난 경우
	int* answer = solution(500, arr, 4);
	printf("{ 120,110,140,150 } 예시: \n");
	for (int i = 0; i < 4; i++) {
		printf("%d ", answer[i]);
	}
	int* answer2 = solution(500, arr2, 4);
	printf("\n{ 200,110,140,150 } 예시: \n");
	for (int i = 0; i < 4; i++) {
		printf("%d ", answer2[i]);
	}
}