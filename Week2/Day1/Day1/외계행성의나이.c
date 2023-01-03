#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int getLen(int age) {
    int len = 0;
    while (age != 0) {
        ++len;
        age /= 10;
    }
    return len;
}

void reserve(char* arr, int len) {
    for (int i = 0; i < len/2; i++) {
        char temp = arr[i];
        arr[i] = arr[strlen(arr) - i - 1];
        arr[strlen(arr) - i - 1] = temp;
    }
}

char* solution(int age) {
    int len = getLen(age);
    char* answer = (char*)malloc(sizeof(char) * (len + 1));
    for (int i = 0; i < len; i++) {
        answer[i] = (char)(age % 10 + 97);
        age /= 10;
    }
    answer[len] = '\0';
    reserve(answer, len);
    printf("%s", answer);
    return answer;
}

void main() {
    char* answer = solution(23);
    //printf("%s", answer);
}