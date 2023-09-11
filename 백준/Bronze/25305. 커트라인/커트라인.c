#include <stdio.h>

int main(void) {
	int num[1000];
	int n, k;
	int temp = 0;

	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);

	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; j < i; j++)	{
			if (num[j] < num[j + 1]) {
				temp = num[j];
				num[j] = num[j+ 1];
				num[j + 1] = temp;
			}
		}
	}

	printf("%d \n", num[k - 1]);
}