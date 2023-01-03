#include <stdio.h>
#include <stdlib.h>

void main() {
	int arr[10];
	int i, sum;
	double avg;
	//입력
	for (i = 0; i < 10; i++) {
		arr[i] = rand() % 101;
	}
	// 요소들의 총합 구하기
	sum = 0;
	for (i = 0; i < 10; i++)
		sum += arr[i];
	avg = (double)sum / 10; //(double)의 우선순위가 /보다 높음
	//출력
	printf("합계 : %d\n", sum);
	printf("평균 : %lf\n", avg);
}