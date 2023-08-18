#include <stdio.h>

int main(void) {
	int n, m;
	int baskets[100];
	int x, y;
	int temp;

	scanf("%d %d", &n, &m);
	for (int j = 0; j < n; j++)
		baskets[j] = j + 1;

	for (int i = 0; i < m; i++) {
		scanf("%d %d", &x, &y);
		temp = baskets[y - 1];
		baskets[y - 1] = baskets[x - 1];
		baskets[x - 1] = temp;
	}

	for (int k = 0; k < n; k++)
		printf("%d ", baskets[k]);
}