#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int func_a(int a[], int n, int length) {
	for (int i = 0; i < n; i++) {
		if (a[i] >= length) {
			return i;
		}
	}
	return -1;
}

int solution(int N, int orders[], int orders_len) {
	int* material = (int*)malloc(sizeof(int) * N);
	int k = 0;
	int price = 0;
	for (int i = 0; i < N; i++) material[i] = 8; // 목재길이 8
	for (int i = 0; i < orders_len; i++) {
		k = func_a(material, N, orders[i]); //
		if (k >= 0) {
			material[k] -= orders[i];
			price += 3000 * orders[i];
		}
	}
	return price;
}

void main() {
	int N = 3;
	int orders[] = { 3,5 };
	printf("매출액: %d원", N, orders, 2); // 42000
}