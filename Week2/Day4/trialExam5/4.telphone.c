#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int func_a(char dest[], char src[]) {
	int k = 0;
	for (int i = 0; src[i] != 0; i++) {
		if ('0' <= src[i] && src[i] <= '9') // ���� '0', '9' ���̶��
			dest[k++] = src[i]; // �纻�� �ֱ�
	}
	dest[k] = 0;
	return k;
}

char* solution(char number[]) {
	char* copy = (char*)malloc(sizeof(char) * (strlen(number) + 1));
	char* answer = (char*)malloc(sizeof(char) * 14);
	int k = 0;
	if (number[0] != '0') copy[k++] = '0'; //0���� �ʱ�ȭ
	func_a(copy+k, number); // ���ڹ��ڸ� ����ִ��� Ȯ��
	if (strlen(copy + 3) < 8) answer[4] = '0'; // 010�� ������ ������ ���� ������ 8���� �۴ٸ�
	k = 0;
	for (int i = 0; copy[i] != 0; i++) {
		answer[k++] = copy[i];
		if (k == 3 || k == 8) { // '-' ���� ���
			answer[k++] = '-';
		}
		if (k == 4 && answer[k] == '0') k++; // 4�� ° �濡 0�� �� �ִ� ���
	}
	answer[k] = 0;
	free(copy);
	return answer;
}

void main() {
	char number[] = "10-222-1111"; //010-0222-1111
	printf("%s", solution(number));
}