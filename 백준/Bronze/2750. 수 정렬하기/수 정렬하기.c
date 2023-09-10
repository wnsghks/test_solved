#include <stdio.h>

int main(void) {
	int n, temp;
	int arr[1000] = {0};

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	temp = 0;
	for (int num = n - 1; num > 0; num--) {
		for (int i = 0; i < num; i++) {
			if (arr[i] > arr[i + 1]) {
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
		printf("%d \n", arr[i]);
}