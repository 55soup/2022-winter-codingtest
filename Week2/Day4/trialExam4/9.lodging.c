#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int arr[], int arr_len, int k) {
	int answer = 0;
	for (int i = 0; i < arr_len; i++) {
		answer += arr[i]/k; // 한 학년의 인원수 / 방에 들어갈 수 있는 최대 인원수
		if (arr[i] % k) answer++;
	}
	return answer;
}

void main() {
	int arr[] = {13,16,9,2,10,7};
	printf("필요한 방의 갯수: %d", solution(arr, 6, 4)); // 17개의 방
}