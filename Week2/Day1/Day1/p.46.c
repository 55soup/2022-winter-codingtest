#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int arge, char*argv[]) {
	int* pArr[5] = { 10, 20, 30, 40, 50 };
	pArr[0] = pArr[0];
	char* pStr[4] = { "red", "green", "blue", "gray" };
	printf("[0]�� ���ڿ� ���: %s\n", pStr[0]);
	printf("[1]�� ���ڿ� ���: %s\n", pStr[1]);
	printf("[2]�� ���ڿ� ���: %s\n", pStr[2]);
	printf("[3]�� ���ڿ� ���: %s\n", pStr[3]);
	return 0;
}