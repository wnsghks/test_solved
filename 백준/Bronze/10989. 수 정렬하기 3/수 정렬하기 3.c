#include <stdio.h>

int main(void) {
	int arr[10001] = {0};
	int n, value;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		value = 0;
		scanf("%d", &value);
		arr[value] += 1;
	}

	for (int i = 0; i < 10001; i++) {
		if (arr[i] != 0) {
			for (int j = 0; j < arr[i]; j++)
				printf("%d \n", i);
		}
	}
}