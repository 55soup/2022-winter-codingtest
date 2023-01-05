#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int cards[]) {
	int answer = 0;
	for (int i = 0; i < 5; i++)
		for (int k = i+1; k < 5; k++)
			for (int m = k+1; m < 5; m++)
				if ((cards[i] + cards[k] + cards[m])%2!=0) // 세 카드의 합은 홀수
					answer++;
		
	
	return answer;
}

void main() {
	int cards[] = { 7,5,6,4,9 };
	printf("홀수가 나오는 조합 경우의 수: %d", solution(cards));
}