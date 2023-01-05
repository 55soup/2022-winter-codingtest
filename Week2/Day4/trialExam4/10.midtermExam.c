#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* solution(int a[][3], int b[][3], int len) {
	int* answer = (int*)malloc(sizeof(int)*2);
	float total_a = 0, total_b = 0; // 소숫점이 잘리는 것을 방지하기 위해서 실수로 선언.
	int total = 0;
	for (int i = 0; i < 4; i++){ // 1~4학년
		for (int j = 0; j < len; j++) {
			// 총 찬성 응답 수
			total_a += a[i][j];
			// 총 반대 응답 수
			total_b += b[i][j];
			total += a[i][j] + b[i][j];
		}
	}
	
	// 백분율 구하기
	answer[0] = (total_a / total) * 100;
	answer[1] = (total_b / total) * 100;

	return answer;
}

void main() {
	int a[][3] = { {3,2,7},{4,2,6},{5,3,8},{7,6,8} };
	int b[][3] = { {30,50,120},{70,90,180},{120,150,260},{102,120,104}};
	int* answer = solution(a, b, 3);
	printf("%d %d", answer[0], answer[1]);
}