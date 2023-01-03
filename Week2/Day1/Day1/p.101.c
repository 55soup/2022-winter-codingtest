#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* solution(int len) {
	int* arr = (int*)malloc(sizeof(int) * len);
	for (int i = 0; i < len; i++) {
		arr[i] = i + 100;
	}
	return arr;
}
int main() {
	int* result;
	result = solution(10); //배열의 시작주소를 반환받는다.
	printf("%d", sizeof(*(&result)));
	for (int i = 0; i < 10; i++) { //반환받은 배열의 길이를 알 수 없다.
		printf(" %d", result[i]);
	}
	return 0;
}