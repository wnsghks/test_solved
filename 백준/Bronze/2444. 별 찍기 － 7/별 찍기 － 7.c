#include <stdio.h>

void show(int t, int n, int star) {
	for (int j = 0; j < (2 * n -1) / 2; j++) {
		printf(" ");
	}

	while (star < (2 * t - 1) - ((2 * n - 1) / 2 * 2)) {
		printf("*");
		star++;
	}
}

int main(void) {
	int t, n, star;
	int flag = 0;

	scanf("%d", &t);
	n = t;
	for (int i = 0; i < (2 * t - 1); i++) {
		star = 0;
		if (flag == 0) {
			show(t, n, star);
			n--;
			if (n == 0)
				flag = 1;
		}
		else {
			if (n <= 0)
				n = 2;
			show(t, n, star);
			n++;
		}
		printf("\n");
	}
}