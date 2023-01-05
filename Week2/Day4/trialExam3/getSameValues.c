#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// ����3. ���� ���� ã�� �������� ���ϴ� �Լ� �ۼ��ϱ�.
int solution(int table[][5], int table_len) {
	int answer = 0;
	int* count = (int*)malloc(sizeof(int) * (table_len+1)); // �л�1, �л�2�� �� �� �ε����� �ϴ� count�迭�� ����
	int max = 0;
	memset(count, 0, sizeof(int) * (table_len+1));

	for (int i = 1; i < 5+1; i++) {
		for (int j = 0; j < table_len; j++) {
			if (table[0][j] == table[i][j]) //�����԰� ���� ��ġ�ϴ� ���
				++count[i]; // 1�� ����
		}
		if (max < count[i]) max = i; // ���� �����԰� ���� ���� ��ģ ���
	}
	answer = max;
	return answer;
}

void main() {
	int table[][5] = { {2,6,1,7,3},{2,9,4,6,8},{6,3,4,7,1},{7,7,1,1,2},{8,6,9,7,3},{4,6,5,9,2} };
	printf("�ӽù���: �л�%d", solution(table, 5));
}