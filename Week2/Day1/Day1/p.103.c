#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char titles[3][20] = { "first", "second", "third" };
	func_a(titles, 3);
}

// int func_a(char p[][20], int n) // 1)
int func_a(char(*p)[20], int n) { // 2)
	for (int i = 0; i < n; i++) {
		printf("%s \n", p[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < 20; k++) {
			printf("%c", p[i][k]);
		}
		printf("\n");
	}
	return 0;
}