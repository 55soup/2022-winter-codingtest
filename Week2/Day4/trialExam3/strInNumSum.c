#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(char string[]) {
	int answer = 0;
	int number = 0;
	for (int i = 0; string[i] != 0; i++) {
		if ('0' <= string[i] && string[i] <= '9') { // ���� ���ڰ� ���ڶ��
			number = number * 10 + (string[i]-'0');
			// number * 10 -> ���� ���ڷ� ���ڰ� ������ �ȳ����� ��.
			// '0'-> 0 : 48 ����!!
		}
		else {
			answer += number;
			number = 0;
		}
	}
	return answer;
}

void main() {
	char str[] = "korean world cup 2018. olympic stadium 10, 11 pm 1.";
	printf("%d", solution(str));
}