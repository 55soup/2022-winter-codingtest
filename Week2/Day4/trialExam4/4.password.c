#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int func_a(char dest[], char src[]) {
	int i;
	dest[0] = src[0];
	for (i = 1; src[i] != 0; ++i) { // ù ���ڴ� ���ذ����ν� �������� �ʴ´�.
		dest[i] = dest[0]+src[i]; // ù���ڿ� �ٸ� ���ڸ� ���� ������ �ٲ۴�.
	}
	dest[i] = 0;
	return 0;
}

char* solution(char string[]) {
	char* encoded = (char*)malloc(sizeof(char) * strlen(string)+1);
	func_a(encoded, string);
	return encoded;
}

void main() {
	char password[] = "1234";
	printf("%s", solution(password));
}