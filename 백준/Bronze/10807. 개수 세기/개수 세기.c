#include <stdio.h>

int main(void) {
	int n, num[256], find;
	int count;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);
	scanf("%d", &find);
	count = 0;
	for (int check = 0; check < n; check++) {
		if (num[check] == find)
			count++;
	}
	printf("%d \n", count);
}