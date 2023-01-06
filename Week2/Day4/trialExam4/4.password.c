#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int func_a(char dest[], char src[]) {
	int i;
	dest[0] = src[0];
	for (i = 1; src[i] != 0; ++i) { // 첫 글자는 기준값으로써 변경하지 않는다.
		dest[i] = dest[0]+src[i]; // 첫글자와 다른 글자를 더한 값으로 바꾼다.
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