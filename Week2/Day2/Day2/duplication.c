#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(char* characters) {
	char* result = malloc(sizeof(char) * strlen(characters));
	int result_len = 0;
	result[0] = characters[0]; //앞 글자가 이미 들어옴.
	result_len++; // 인덱스 1부터 시작
	for (int i = 1; i < strlen(characters); i++) {
		if (characters[i - 1] != characters[i]) {
			result[result_len] = characters[i];
			result_len++;
		}
	}
	result[result_len] = NULL;
	return result;
}

int main() {
    char* characters = "senteeeencccccceeee";
    char* ret = solution(characters);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret);
}