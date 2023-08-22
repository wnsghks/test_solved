#include <stdio.h>

int main(void) {
	int my[7];
	int chess[7] = {1, 1, 2, 2, 2, 8};
	int need[7] = {0, 0, 0, 0, 0, 0};

	scanf("%d %d %d %d %d %d", &my[0], &my[1], &my[2], &my[3], &my[4], &my[5]);
	for (int i = 0; i < 6; i++) {
		need[i] = chess[i] - my[i];
		printf("%d ", need[i]);
	}
}