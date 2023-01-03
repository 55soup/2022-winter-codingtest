#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int solution(int p[]) { // <-- []로 배열이 전달되는 것임을 알리려는 의도
	// 포인터는 배열과 같다!
	printf("p의 크기 %d\n", sizeof(p));
	return 0;
}

void main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("arr의 크기 %d\n", sizeof(arr));
	solution(arr);
}