#include <stdio.h>

int main(void) {
	int n, m;
	int baskets[100];
	int min, max;
	int ball;

	scanf("%d %d", &n, &m);
	for (int j = 0; j < n; j++)
		baskets[j] = 0;

	for (int i = 0; i < m; i++) {
		scanf("%d %d %d", &min, &max, &ball);
		while(min <= max) {
			baskets[min - 1] = ball;
			min++;
		}
	}

	for (int k = 0; k < n; k++)
		printf("%d ", baskets[k]);
}