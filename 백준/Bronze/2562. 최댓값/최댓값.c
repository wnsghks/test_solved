#include <stdio.h>

int main(void) {
	int arr[9];
	int max;
	int idx =0;;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	for (int j = 0; j < 9; j++) {
		if (max < arr[j]) {
			max = arr[j];
			idx = j;
		}
	}
	printf("%d \n", max);
	printf("%d \n", idx + 1);
}