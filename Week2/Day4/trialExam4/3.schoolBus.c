#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int student[], int apts) {
	int result = 0;
	// 아파트 단지 돌기
	for (int i = 0; i < apts; i++) {
		// 정원 12명 나누기
		result += student[i] / 12;
		// 만약 나머지가 남는다면 한번 더 왕복해야함.
		result += (student[i] % 12 != 0)? 1 : 0;
	}
	return result;
}

void main() {
	int student[] = {8, 20, 12, 3, 4};
	int apts=5;
	printf("버스 왕복 수: %d번", solution(student, apts)); // 6번

}