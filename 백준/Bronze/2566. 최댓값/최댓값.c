#include <stdio.h>

int main(void) {
	int max, row, col;
	int num[10][10];

	max = 0;
	row = 1;
	col = 1;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &num[i][j]);
			if (num[i][j] > max) {
				max = num[i][j];
				row = j + 1;
				col = i + 1;
			}
		}
	}

	printf("%d \n", max);
	printf("%d %d \n", col, row);
}