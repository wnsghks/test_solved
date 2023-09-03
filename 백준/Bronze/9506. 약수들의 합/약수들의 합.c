#include <stdio.h>
#include <string.h>

int main(void) {
	int n;

	while (1) {
		int idx = 0;
		int sum = 0;
		int min[10000] = {0};

		scanf("%d", &n);
		if (n == -1)
			break ;

		for(int i = 1; i < n ; i++) {
			if (n % i == 0) {
				min[idx] = i;
				idx++;
				sum += i;
			}
		}

		if (sum == n) {
			printf("%d = %d", n, min[0]);
			for (int i = 1; i < idx; i++) {
				printf(" + %d", min[i]);
			}
			printf("\n");
		} else {
			printf("%d is NOT perfect. \n", n);
		}
	}
}