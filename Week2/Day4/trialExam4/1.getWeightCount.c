#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int arr[], int arr_len, int payload) {
	int cnt = 0;
	int weight = 0;
	int diff = 0;
	for (int i = arr_len-1; i >= 0; i--) { // ���԰� ���� ���ſ� ���� ��������
		diff = payload - weight; // ������ ���� - �տ��� ���� ���� ����
		if (diff >= arr[i]) { // ���� ���� ������ �ߺ��� ũ�ų� ���ٸ�
			weight += arr[i];
			cnt++;
		}
	}
	if (weight != payload) // ���� ���԰� ������ ���Կ� �ٸ��ٸ� ���� ���Ը� ������ ������ ����.
		cnt = 0;
	
	return cnt;
}

void main() {
	int arr[] = { 1,2,3,5,7,11,13,17,19,23 };
	printf("���� ����: %d",solution(arr, 10, 10));
}