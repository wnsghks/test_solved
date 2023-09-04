#include <stdio.h>

int main(void) {
	int m, n;
	int min;
	int sum = 0;

	scanf("%d", &m);
	scanf("%d", &n);
	min = n;
	for (int i = m; i <= n; i++) {
		for (int j = 2; j <= i; j++) {
			if (j == i) {
				sum += i;
				if (i < min)
					min = i;
			}
			if (i % j == 0)
				break ;
		}
	}

	if (sum == 0)
		printf("-1 \n");
	else {
		printf("%d \n", sum);
		printf("%d \n", min);
	}
}