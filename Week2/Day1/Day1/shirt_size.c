#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* solution(char* shirt_size[], int shirt_size_len) {
	int* answer;
	answer = (int*)malloc(shirt_size_len * sizeof(int));
	memset(answer, 0, shirt_size_len * sizeof(int));
	for (int i = 0; i < shirt_size_len; i++) {
		if (!strcmp(shirt_size[i], "XS")) answer[0]++;
		else if (!strcmp(shirt_size[i], "S")) answer[1]++;
		else if (!strcmp(shirt_size[i], "M")) answer[2]++;
		else if (!strcmp(shirt_size[i], "L")) answer[3]++;
		else if (!strcmp(shirt_size[i], "XL")) answer[4]++;
		else answer[5]++;
	}
	return answer;
}
void main() {
	char* shirt_size[] = {"XS", "S", "L", "L", "XL", "S"};
	int shirt_size_len=6;
	int* answer = solution(shirt_size, shirt_size_len);
	printf("[");
	for (int i = 0; i < shirt_size_len; i++)
		printf("%d, ", answer[i]);
	printf("]");
}