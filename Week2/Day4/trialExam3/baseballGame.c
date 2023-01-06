#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* solution(int a, int b) {
	int* result = (int*)malloc(sizeof(int) * 2);
	int temp;
	result[0] = 0;
	result[1] = 0;
	for (int i = 0; i < 3; i++) {
		temp = b;
		for (int k = 0; k < 3; k++) {
			if (a % 10 == temp % 10) {
				if (i == k) result[0]++;
				else result[1]++;
			}
			temp /= 10;
		}
		a /= 10; // 비교대상인 a를 10으로 나누어야 함.
	}
	return result;
}
void main() {
	int* answer = solution(452,329);
	printf("%d %d", answer[0], answer[1]); // 스트라이크: 0개, 볼: 1개
}