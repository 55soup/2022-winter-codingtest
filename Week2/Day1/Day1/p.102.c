#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int func_a(*p, int n) {
	return 0;
}

int main() {
	char titles[5][20] = { "first", "second", "thid", "fourth", "fifth" };
	func_a(titles, 5);
	return 0;
}