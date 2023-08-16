#include <stdio.h>

int main(void) {
	int x;
	int n;
	int time;
	int sum = 0;

	scanf("%d", &x);
	scanf("%d", &n);
	time = n;
	for (int i = 0; i < time; i++) {
		int a, b;

		a = 0;
		b = 0;
		scanf("%d %d", &a, &b);
		sum += a * b;
	}
	if (x == sum)
		printf("Yes");
	else
		printf("No");
}