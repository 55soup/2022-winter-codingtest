#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* Add(int x, int y) {
	// �ּҸ� ��ȯ�ϴ� ��� ��ȯ���� *�� �ٴ´�.
	int sum;
	sum = x + y;
	return &sum; //���������� sum�� �ּҸ� ��ȯ�Ѵ�.
}

void main() {
	int x = 5, y = 7;
	int* pz; // �Լ��� ��ȯ���� �ּ��̴�.
	pz = Add(x, y);
	printf("%d\n", *pz);
	printf("%d\n", *pz); // ���������� sum�� �ּҸ� ��ȯ�ϸ� �� ���� �������� ���� ����!!
}