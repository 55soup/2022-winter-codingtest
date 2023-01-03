#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	int number;
	int* pNumber = NULL; // 주소를 지저앟기 않은 상태를 표시
	number = 5;
	printf("number의 값 : %d\n", number); //5
	pNumber = &number; // number 변수의 주소를 가리킴
	*pNumber = *pNumber + 5; //*pNumber는 number라고 쓴것과 같다.
	printf("number의 값 : %d\n", number); //10
	printf("number의 주소값 : %p\n", &number); //10
	printf("pNumber의 값 : %p\n", pNumber); // pNumber는 number의 주소와 같다.
}