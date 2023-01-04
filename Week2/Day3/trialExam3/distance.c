#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

double solution(int a, int b) {
	double answer = 0;
	int diff = abs(a - b);
	answer = 10.0 / diff;
	return answer * 60;
}

void main() {
	double answer = solution(10, 20);
	printf("%lf", answer);
}