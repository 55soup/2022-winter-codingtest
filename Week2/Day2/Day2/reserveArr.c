#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(int arr[], int arr_len) {
    int left = 0;
    int right = arr_len - 1;
    while (left<right) { //left와 right가 같으면 종료한다.
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left += 1;
        right -= 1;
    }
    return arr;
}

int main() {
    int arr[5] = { 1, 4, 2, 3 };
    int arr_len = sizeof(arr)/sizeof(int);
    int* ret = solution(arr, arr_len);

    printf("solution 함수의 반환 값은 {");
    for (int i = 0; i < arr_len; i++) {
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf("} 입니다.\n");
}