#include <stdio.h>

int main(void) {
	int n;
	int check;

	scanf("%d", &n);
	for	(int i = 1; i <= n; i++) {
		check = 0;
		while (check < n - i) {
			printf(" ");
			check++;
		}
		check = 0;
		while (check < i) {
			printf("*");
			check++;
		}
		printf("\n");
	}
}