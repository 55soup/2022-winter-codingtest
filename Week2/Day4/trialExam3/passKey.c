#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int solution(char pass[], char key[]) {
	int answer = 0;
	int match_cnt=0;
	for (int i = 0; key[i] != 0; ++i) {
		for (int k = 0; pass[k] != 0; ++k) {
			if (key[i] == pass[k]) {
				match_cnt++;
				break;
			}
		}
	}
	if (match_cnt >= strlen(key)) answer = 1;  // 'G' 'a' '#' '9' 4���ڰ� �� �� �ϳ��̻� �־�� ��.
	return answer;
}

void main() {
	char pass[] = "sdfG1";
	char key[] = "Ga#9";
	printf("���(1): %d", solution(pass, key));
}