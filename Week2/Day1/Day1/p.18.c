#include <stdio.h>

void main() {
	int arr[3][4] = { 0 };
	printf("arr의 크기 : %d\n", sizeof(arr));
	printf("arr[0]의 크기 : %d\n", sizeof(arr[0]));
	printf("arr[1]의 크기 : %d\n", sizeof(arr[1]));
	printf("arr[2]의 크기 : %d\n", sizeof(arr[2]));
	printf("arr[2][3]의 크기 : %d\n", sizeof(arr[2][3]));

	char ch = '9';
	int number = ch - 48; //ch-'0'
	printf("%3d", number);
	printf("%3d", ch);
}