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
		a /= 10; // �񱳴���� a�� 10���� ������� ��.
	}
	return result;
}
void main() {
	int* answer = solution(452,329);
	printf("%d %d", answer[0], answer[1]); // ��Ʈ����ũ: 0��, ��: 1��
}