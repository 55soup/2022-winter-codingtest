#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void Swap(int* pa, int* pb) {
	int a = *pa; // 전달받은 주소(a)의 값을 복사한다.
	int b = *pb; // 전달받은 주소(b)의 값을 복사한다.
	*pa = b;
	*pb = a;
}
void main() {
	int a = 5, b = 8;
	printf("a = %d b = %d", a, b);
	Swap(&a, &b);
	printf("함수 호출 후\n");
	printf("a = %d b = %d", a, b);
}