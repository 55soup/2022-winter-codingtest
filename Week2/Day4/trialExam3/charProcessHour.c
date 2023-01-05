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
		if (len % 4 != 0) // 4������ ������ �������� ������ 1�� �� �߰�
			result++;
	}
	return result;
}

void main() {
	char* strings[] = {"asdf", "asdfg"}; // 1��, 2��
	printf(" �� �ɸ��� �ð�: %d��\n", solution(strings, 2));

}