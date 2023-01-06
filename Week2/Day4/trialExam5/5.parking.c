#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int func_a(int a) {
	return ((a / 100) * 60) + (a % 100);
}
int solution(int arr[], int arr_len) {
	int answer = 0;
	int min_a;
	int min_b;
	min_a = func_a(2200); // ����10�� ���
	for (int i = 0; i < arr_len; i++) {
		min_b = func_a(arr[i]);
		answer += 1000 + ((min_a - min_b) / 10) * 500; // �⺻��� 1000 + �߰���� 10�д� 500��
	}
	return answer;
}

void main() {
	// 10�д� 500�� -> 60�� �� 3000��
	int arr[] = { 1900, 1800 }; // 10000��, 13000�� = �� 23000��
	printf("�������: %d", solution(arr, 2));
}