#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int func_a(char s[]) {
	int cnt = 0;
	for (int i = 0; s[i] != 0; ++i){
		// 대괄호가 완전한 경우 cnt는 0
		if (s[i] == '[') cnt++;
		if (s[i] == ']') cnt--;
	}
	return cnt;
}

int solution(char string[]) {
	int answer = 0;
	if (func_a(string)!=0) { return -1; }
	// 대괄호의 쌍 갯수 구하기
	for (int i = 0; i < strlen(string); ++i) {
		if (string[i] == '[') { //이미 대괄호가 완전한 경우를 구했기 때문에 시작대괄호의 갯수만 세도 됨.
			answer++;
		}
	}
	return answer;
}
void main() {
	char s[] = "kim, [10,20,30] jung [30,20]";
	printf("배열의 갯수: %d", solution(s));

}