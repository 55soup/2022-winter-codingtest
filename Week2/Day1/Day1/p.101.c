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
	result = solution(10); //�迭�� �����ּҸ� ��ȯ�޴´�.
	printf("%d", sizeof(*(&result)));
	for (int i = 0; i < 10; i++) { //��ȯ���� �迭�� ���̸� �� �� ����.
		printf(" %d", result[i]);
	}
	return 0;
}