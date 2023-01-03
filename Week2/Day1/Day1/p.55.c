#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* Add(int x, int y) {
	// 주소를 반환하는 경우 반환형은 *이 붙는다.
	int sum;
	sum = x + y;
	return &sum; //지역변수인 sum의 주소를 반환한다.
}

void main() {
	int x = 5, y = 7;
	int* pz; // 함수의 봔환형이 주소이다.
	pz = Add(x, y);
	printf("%d\n", *pz);
	printf("%d\n", *pz); // 지역변수인 sum의 주소를 반환하면 그 값이 유지되지 않음 주의!!
}