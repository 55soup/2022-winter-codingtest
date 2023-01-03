#include <stdio.h>
#include <stdlib.h>

int func_a(char(*p)[20], int n) {
	return 0;
}

int func_b(char* p[], int n) {
	//char *p[]는 char**p와 같다.
	return 0;
}

int main() {
	char titles[5][20] = { "first", "second", "third", "fourth", "fifth" };
	// 2차 배열의 전달
	func_a(titles, 5);
	// 포인터 배열 par에 위 titles 배열의 각 행의 시작주소를 저장한다.
	char* par[5] = { titles[0], titles[1], titles[2], titles[3], titles[4] };
	func_b(par, 5); //배열의 길이는 5이다.
	return 0;
}