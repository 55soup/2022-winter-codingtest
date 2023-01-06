#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* solution(int wats[], int wats_len, int bill) {
	int* result = (int*)malloc(sizeof(int) * 8);
	float unit_price = (bill / wats[0]) + 1; // 단위 요금 총 전기 요금 / 총 사용량
	for (int i = 0; i < 8; i++) {
		result[i] = wats[i+1] * unit_price;
	}
	return result;
}

void main() {
	int wats[] = { 224,213,104,124,221,79,94,65 };
	int* answer = solution(wats, 8, 27500);
	for (int i = 0; i < 8; i++) {
		printf("%d ", answer[i]);
	}
}