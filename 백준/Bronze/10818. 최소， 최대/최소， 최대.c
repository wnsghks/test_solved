#include <stdio.h>

int main(void) {
	int n;
	int arr[1000000];
	int min, max;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	min = arr[0];
	max = arr[0];
	for (int j = 0; j < n; j++) {
		if (min > arr[j])
			min = arr[j];
		if (max < arr[j])
			max = arr[j];
	}
	printf("%d %d", min, max);
}