#include <stdio.h>

int main(void) {
	int n, i;
	int div = 0;
	int range = 1;

	scanf("%d", &n);
	i = 1;
	while (range < n) {
		range = range + (6 * i);
		i++;
	}

	printf("%d \n", i);
}