#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int walls) {
	int answer = 0;
	int painted_walls = 0;
	int i;
	for (i = 1; painted_walls < walls; i++) {
		painted_walls = (i)+(i/2)+(i/4); // 1�ð��� A�� �Ѻ�, B�� 1/2��, C�� 1/4���� ĥ��.
	}
	answer = i-1; // for������ i++ �� ����Ǳ� ������ i-1 ��ȯ
	return answer;
}
void main() {
	// A: 1h, B: 2h, C: 4h
	printf("7���� ��� ĥ�ϴµ� �ɸ��� �ð�: %d\n", solution(7)); //4�ð��� 7�� ĥ�� �� ����
	printf("10���� ��� ĥ�ϴµ� �ɸ��� �ð�: %d", solution(10)); //9�ð��� 10�� ĥ�� �� ����
}