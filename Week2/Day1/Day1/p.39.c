#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char word[6][20] = { "�ѱ�", "�̱�", "�Ϻ�", "����" ,"����", "ȣ��" };
	int len = sizeof(word) / sizeof(word[0]);
	int cnt=0;
	for (int i = 0; i < len; i++) {
		if (!strcmp(word[i], "����")) {
			printf("%d ��°�� ����", i + 1);
			cnt++;
		}
	}
	if (cnt==0) printf("ã�� �� ����\n");
}