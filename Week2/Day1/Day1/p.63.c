#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int solution(int p[]) { // <-- []�� �迭�� ���޵Ǵ� ������ �˸����� �ǵ�
	// �����ʹ� �迭�� ����!
	printf("p�� ũ�� %d\n", sizeof(p));
	return 0;
}

void main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("arr�� ũ�� %d\n", sizeof(arr));
	solution(arr);
}