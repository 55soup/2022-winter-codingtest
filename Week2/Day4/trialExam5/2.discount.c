#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int arr[], int arr_len) {
	int answer = 0;
	int price;
	for (int i = 0; i < arr_len; i++) {
		price = arr[i];
		if ((i+1) % 4 == 0) { // 3개를 산 후 추가 상품이라면
			price *= 0.5; // 50% 할인
		}
		answer += price;
	}
	return answer;
}

void main() {
	int arr[] = { 100,500,200,400,300 };
	printf("총 내야할 금액은: %d원", solution(arr, 5));
}