#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int func_a(char dest[], char src[]) {
	int k = 0;
	for (int i = 0; src[i] != 0; i++) {
		if ('0' <= src[i] && src[i] <= '9') // 문자 '0', '9' 사이라면
			dest[k++] = src[i]; // 사본에 넣기
	}
	dest[k] = 0;
	return k;
}

char* solution(char number[]) {
	char* copy = (char*)malloc(sizeof(char) * (strlen(number) + 1));
	char* answer = (char*)malloc(sizeof(char) * 14);
	int k = 0;
	if (number[0] != '0') copy[k++] = '0'; //0으로 초기화
	func_a(copy+k, number); // 숫자문자만 들어있는지 확인
	if (strlen(copy + 3) < 8) answer[4] = '0'; // 010을 제외한 나머지 문자 갯수가 8보다 작다면
	k = 0;
	for (int i = 0; copy[i] != 0; i++) {
		answer[k++] = copy[i];
		if (k == 3 || k == 8) { // '-' 빠진 경우
			answer[k++] = '-';
		}
		if (k == 4 && answer[k] == '0') k++; // 4번 째 방에 0이 들어가 있는 경우
	}
	answer[k] = 0;
	free(copy);
	return answer;
}

void main() {
	char number[] = "10-222-1111"; //010-0222-1111
	printf("%s", solution(number));
}