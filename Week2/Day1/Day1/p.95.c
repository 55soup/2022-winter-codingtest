#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	int number;
	int* pNumber = NULL; // �ּҸ� �����۱� ���� ���¸� ǥ��
	number = 5;
	printf("number�� �� : %d\n", number); //5
	pNumber = &number; // number ������ �ּҸ� ����Ŵ
	*pNumber = *pNumber + 5; //*pNumber�� number��� ���Ͱ� ����.
	printf("number�� �� : %d\n", number); //10
	printf("number�� �ּҰ� : %p\n", &number); //10
	printf("pNumber�� �� : %p\n", pNumber); // pNumber�� number�� �ּҿ� ����.
}