#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int func_a(char s[]) {
	int cnt = 0;
	for (int i = 0; s[i] != 0; ++i){
		// ���ȣ�� ������ ��� cnt�� 0
		if (s[i] == '[') cnt++;
		if (s[i] == ']') cnt--;
	}
	return cnt;
}

int solution(char string[]) {
	int answer = 0;
	if (func_a(string)!=0) { return -1; }
	// ���ȣ�� �� ���� ���ϱ�
	for (int i = 0; i < strlen(string); ++i) {
		if (string[i] == '[') { //�̹� ���ȣ�� ������ ��츦 ���߱� ������ ���۴��ȣ�� ������ ���� ��.
			answer++;
		}
	}
	return answer;
}
void main() {
	char s[] = "kim, [10,20,30] jung [30,20]";
	printf("�迭�� ����: %d", solution(s));

}