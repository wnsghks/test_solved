#include <stdio.h>

int main(void) {
	int n, k;
	int idx = 0;
	int min[10000] = {0};

	scanf("%d %d", &n, &k);
	for(int i = 1; i <= n ; i++) {
		if (n % i == 0) {
			min[idx] = i;
			idx++;
		}
		if (idx == k) {
			printf("%d \n", i);
			break ;
		}
	}

	if (idx < k)
		printf("0 \n");
}