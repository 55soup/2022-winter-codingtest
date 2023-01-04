#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int stones[], int stones_len) {
    int cnt = 0;
    int current = 0;
    while (
        current < stones_len) {
        current += stones[cnt++];
        cnt++;
    }
    return cnt;
}