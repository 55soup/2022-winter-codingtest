#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char* pChar;
	int* pInt;
	double* pDouble;
	printf("%d\n", sizeof(pChar)); //�����ͺ��� ũ��� ��� ����.
	printf("%d\n", sizeof(pInt));
	printf("%d\n", sizeof(pDouble));

	printf("%d\n", sizeof(*pChar)); // 
	printf("%d\n", sizeof(*pInt)); // 
	printf("%d\n", sizeof(*pDouble)); // 

}