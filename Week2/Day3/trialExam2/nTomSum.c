#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int func_a(int k) {
	int sum = 0;
	for (int i = 0; i <= k; i++)
		sum += i;
	return sum;
}

int solution(int n, int m) {
	// 만약 5부터 10까지의 합이라면
	// 10까지의 합 - 4까지의 합 == 5부터 10까지의 합
	int sum_to_m = func_a(m);
	int sum_to_n = func_a(n-1);
	int answer = sum_to_m - sum_to_n;
	return answer;
}

void main() {
	printf("1부터 10까지의 합: %d", solution(2, 10));
}