#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int down[], int up[], int N) {
	int answer = 0;
	int stand;
	int passenger = 0;
	for (int i = 0; i < N; ++i) {
		passenger += up[i] - down[i];
		stand = passenger-240; // �Լ��� ����� ��: ��ü �¼� �� - ž���� ����� ��
		if (stand > 0 && stand > answer) { // �Լ��� ����� �ִ� ��� && �Լ��� ����� �ִ�
			answer = stand;
		}
	}
	return answer;
}

void main() {
	int down[] = { 0,0,140,80,280 };
	int up[] = { 240,100,0,160,0 };
	printf("���� ���� �Լ��� ����� ����: %d��", solution(down, up, 5)); //100
}