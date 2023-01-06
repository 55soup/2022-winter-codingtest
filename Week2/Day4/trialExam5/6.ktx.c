#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int down[], int up[], int N) {
	int answer = 0;
	int stand;
	int passenger = 0;
	for (int i = 0; i < N; ++i) {
		passenger += up[i] - down[i];
		stand = passenger-240; // 입석한 사람의 수: 전체 좌석 수 - 탑승한 사람의 수
		if (stand > 0 && stand > answer) { // 입석인 사람이 있는 경우 && 입석인 사람의 최댓값
			answer = stand;
		}
	}
	return answer;
}

void main() {
	int down[] = { 0,0,140,80,280 };
	int up[] = { 240,100,0,160,0 };
	printf("가장 많이 입석한 사람의 수는: %d명", solution(down, up, 5)); //100
}