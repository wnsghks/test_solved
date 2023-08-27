#include <stdio.h>

int main(void) {
	int pos[100][100] = {0};
	int paper;
	int row, col;
	int count;

	paper = 0;
	scanf("%d", &paper);
	for (int i = 0; i < paper; i++) {
		scanf("%d %d", &row, &col);
		for (int j = row; j < row + 10; j++) {
			for (int k = col; k < col + 10; k++)
				pos[j][k] = 1;
		}
	}

	count = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (pos[i][j] == 1)
				count++;
		}
	}

	printf("%d \n", count);
}