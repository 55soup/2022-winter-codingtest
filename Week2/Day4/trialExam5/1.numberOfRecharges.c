#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int a[], int N) {
	int answer = 0;
	for (int i = 0; i < N; i++)
		answer += a[i];
	answer /= 40;
	return answer;
}

void main() {
	int a[] = { 20,10,30,30 };
	int N = 4;
	printf("ÃæÀü È½¼ö´Â: %d", solution(a, N));
}