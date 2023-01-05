#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int solution(const char* strings[], int str_len) {
	int result = 0;
	int len;
	for (int i = 0; i < str_len; i++) {
		len = strlen(strings[i]);
		result += (len / 4);
		if (len % 4 != 0) // 4분으로 나누어 떨어지지 않으면 1분 더 추가
			result++;
	}
	return result;
}

void main() {
	char* strings[] = {"asdf", "asdfg"}; // 1분, 2분
	printf(" 총 걸리는 시간: %d분\n", solution(strings, 2));

}