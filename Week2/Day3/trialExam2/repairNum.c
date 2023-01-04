#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char* solution(char* s) {
	char* s_ret = (char*)malloc(sizeof(char) * (strlen(s) + 1));
	strcpy(s_ret, s);

	for (int i = 0; s_ret[i] != 0; ++i) {
		if (s_ret[i]>='0'&& s_ret[i] <= '9')
			s_ret[i] = 'i' - s_ret[i];
	}
	return s_ret;
}

void main() {
	char* answer = solution("ab8c6d");
	printf("%s", answer);
	/*for (int i = 0; i < strlen(answer); i++)
		printf("%c", answer);*/
}