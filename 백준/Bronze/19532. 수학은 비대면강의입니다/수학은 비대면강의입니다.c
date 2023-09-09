#include <stdio.h>

int main(void) {
	int a, b, c, d, e, f;
	int x, y;

	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	y = (a * f - c * d) / (a * e - b * d);
	x = (c * e - f * b) / (a * e - d * b);
	printf("%d %d \n", x, y);
}