#include <stdio.h>

int main(void) {
	int n;
	int sum, provide = 0;

	scanf("%d", &n);
	for (int i = 1; i < n; i++) {
		sum = i;
		provide = i;
		while (provide) {
			sum = sum + provide % 10;
			provide = provide / 10;
		}
		if (sum == n) {
			printf("%d \n", i);
			break ;
		}
	}

	if (sum != n)
		printf("0 \n");

}