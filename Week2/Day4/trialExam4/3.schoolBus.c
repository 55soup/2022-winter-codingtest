#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int student[], int apts) {
	int result = 0;
	// ����Ʈ ���� ����
	for (int i = 0; i < apts; i++) {
		// ���� 12�� ������
		result += student[i] / 12;
		// ���� �������� ���´ٸ� �ѹ� �� �պ��ؾ���.
		result += (student[i] % 12 != 0)? 1 : 0;
	}
	return result;
}

void main() {
	int student[] = {8, 20, 12, 3, 4};
	int apts=5;
	printf("���� �պ� ��: %d��", solution(student, apts)); // 6��

}