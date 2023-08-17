#include <stdio.h>

int main(void) {
	int n, num[10000], find;
	int count;

	scanf("%d %d", &n, &find);
	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);
	for (int j = 0; j < n; j++) {
		if (num[j] < find)
			printf("%d ", num[j]);
	}
}