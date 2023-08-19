#include <stdio.h>

int main(void) {
	int n, time;
	int b[100];
	int temp = 0;

	scanf("%d %d", &n, &time);
	for (int idx = 0; idx < n; idx++)
		b[idx] = idx + 1;
	for (int i = 0; i < time; i++) {
		int min, max;

		scanf("%d %d", &min, &max);
		for (int j = 0; j < (max - min + 1) / 2; j++) {
			temp = b[(max - 1) - j];
			b[(max - 1) - j] = b[(min - 1) + j];
			b[(min - 1) + j] = temp;
		}
	}
	for (int idx_c = 0; idx_c < n; idx_c++)
		printf("%d ", b[idx_c]);
}