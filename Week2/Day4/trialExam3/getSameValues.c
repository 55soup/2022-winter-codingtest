#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// 문제3. 같은 값을 찾아 개수르르 구하는 함수 작성하기.
int solution(int table[][5], int table_len) {
	int answer = 0;
	int* count = (int*)malloc(sizeof(int) * (table_len+1)); // 학생1, 학생2를 각 각 인덱스로 하는 count배열을 생성
	int max = 0;
	memset(count, 0, sizeof(int) * (table_len+1));

	for (int i = 1; i < 5+1; i++) {
		for (int j = 0; j < table_len; j++) {
			if (table[0][j] == table[i][j]) //선생님과 반이 일치하는 경우
				++count[i]; // 1씩 증가
		}
		if (max < count[i]) max = i; // 가장 선생님과 많은 반이 겹친 사람
	}
	answer = max;
	return answer;
}

void main() {
	int table[][5] = { {2,6,1,7,3},{2,9,4,6,8},{6,3,4,7,1},{7,7,1,1,2},{8,6,9,7,3},{4,6,5,9,2} };
	printf("임시반장: 학생%d", solution(table, 5));
}