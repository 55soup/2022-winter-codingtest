#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	int number = 5;
	int* ptr = &number; //ptr이 number의 주소를 가리킴.
	printf("%d", &ptr);
	*ptr = 10;
	printf("%d", &ptr);
}