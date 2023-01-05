#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* solution(int scores[][4], int scores_len) {
	int* result = (int*)malloc(sizeof(int) * scores_len);
	for (int i = 0; i < 4; i++) {
		result[i] = 0; // º¯¼ö ÃÊ±âÈ­
		for (int k = 0; k < 4; k++) {
			if (i != k) { // ´Ù¸¥ ÆÀ ³¢¸® ºñ±³
				result[i] += scores[i][k]*2; // ½ÂÁ¡Àº 2Á¡
			}
		}
	}
	return result;
}

void main() {
	int scores[][4] = {
		{-1,1,0,0},
		{0,-1,0,1},
		{1,1,-1,1},
		{1,0,0,-1},
	};

	int* answer=solution(scores, 16);
	for (int i = 0; i < 4; i++) {
		printf("%d ", answer[i]);
	}


}