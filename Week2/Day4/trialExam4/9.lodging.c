#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int arr[], int arr_len, int k) {
	int answer = 0;
	for (int i = 0; i < arr_len; i++) {
		answer += arr[i]/k; // �� �г��� �ο��� / �濡 �� �� �ִ� �ִ� �ο���
		if (arr[i] % k) answer++;
	}
	return answer;
}

void main() {
	int arr[] = {13,16,9,2,10,7};
	printf("�ʿ��� ���� ����: %d", solution(arr, 6, 4)); // 17���� ��
}