#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char word[6][20] = { "한국", "미국", "일본", "영국" ,"독일", "호추" };
	int len = sizeof(word) / sizeof(word[0]);
	int cnt=0;
	for (int i = 0; i < len; i++) {
		if (!strcmp(word[i], "독일")) {
			printf("%d 번째에 있음", i + 1);
			cnt++;
		}
	}
	if (cnt==0) printf("찾을 수 없음\n");
}