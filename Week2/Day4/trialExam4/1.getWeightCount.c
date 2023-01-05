#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int arr[], int arr_len, int payload) {
	int cnt = 0;
	int weight = 0;
	int diff = 0;
	for (int i = arr_len-1; i >= 0; i--) { // 무게가 가장 무거운 추의 단위부터
		diff = payload - weight; // 구슬의 무게 - 앞에서 더한 추의 무게
		if (diff >= arr[i]) { // 남은 추의 갯수가 추보다 크거나 같다면
			weight += arr[i];
			cnt++;
		}
	}
	if (weight != payload) // 추의 무게가 구슬의 무게와 다르다면 추의 무게를 완전히 맞추지 못함.
		cnt = 0;
	
	return cnt;
}

void main() {
	int arr[] = { 1,2,3,5,7,11,13,17,19,23 };
	printf("추의 개수: %d",solution(arr, 10, 10));
}