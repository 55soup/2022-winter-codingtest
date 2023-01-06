#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int func_a(int a) {
	return ((a / 100) * 60) + (a % 100);
}
int solution(int arr[], int arr_len) {
	int answer = 0;
	int min_a;
	int min_b;
	min_a = func_a(2200); // 오후10시 요금
	for (int i = 0; i < arr_len; i++) {
		min_b = func_a(arr[i]);
		answer += 1000 + ((min_a - min_b) / 10) * 500; // 기본요금 1000 + 추가요금 10분당 500원
	}
	return answer;
}

void main() {
	// 10분당 500원 -> 60분 당 3000원
	int arr[] = { 1900, 1800 }; // 10000원, 13000원 = 총 23000원
	printf("요금정산: %d", solution(arr, 2));
}