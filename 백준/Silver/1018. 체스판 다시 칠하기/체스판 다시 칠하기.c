#include <stdio.h>

int main(void) {
	int n, m;
	char chess[50][50];

	int w, b;
	int min = 64;

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%s", chess[i]);

	for (int i = 0; i < n - 7; i++) {
		for (int j = 0; j < m - 7; j++) {
			w = 0;
			b = 0;

			for (int row = i; row < i + 8; row++) {
				for (int col = j; col < j + 8; col++) {
					if ((row + col) % 2 == 0) {
						if (chess[row][col] == 'W')
							b++;
						else
							w++;
					}
					else {
						if (chess[row][col] == 'W')
							w++;
						else
							b++;
					}
				}
			}

			if (b < w) {
				if (min > b)
					min = b;
			}
			else
				if (min > w)
					min = w;
		}
	}

	printf("%d \n", min);
}