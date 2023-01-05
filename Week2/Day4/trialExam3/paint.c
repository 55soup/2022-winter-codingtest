#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int walls) {
	int answer = 0;
	int painted_walls = 0;
	int i;
	for (i = 1; painted_walls < walls; i++) {
		painted_walls = (i)+(i/2)+(i/4); // 1시간당 A는 한벽, B는 1/2벽, C는 1/4벽을 칠함.
	}
	answer = i-1; // for문에서 i++ 후 종료되기 때문에 i-1 반환
	return answer;
}
void main() {
	// A: 1h, B: 2h, C: 4h
	printf("7벽을 모두 칠하는데 걸리는 시간: %d\n", solution(7)); //4시간에 7벽 칠할 수 있음
	printf("10벽을 모두 칠하는데 걸리는 시간: %d", solution(10)); //9시간에 10벽 칠할 수 있음
}