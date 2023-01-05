#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int mho_arr[], int mhe_arr[], int arr_len) {
	int result = -1;
	int mho_vict = 0, mhe_vict = 0;
	for (int i = 0; i < arr_len; i++) {
		if (mho_arr[i] > mhe_arr[i]) mho_vict++;
		else if (mho_arr[i] < mhe_arr[i]) mhe_vict++;
	}
	//result = mho_vict > mhe_vict ? 1 : 0;
	if (mho_vict > mhe_vict) result = 1;
	else if (mho_vict < mhe_vict) result = 0;
	return result;
}

void main() {
	int mho_arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
	int mhe_arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
	printf("%d ", solution(mho_arr, mhe_arr, 13));

}