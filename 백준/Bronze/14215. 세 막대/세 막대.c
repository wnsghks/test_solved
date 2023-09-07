#include <stdio.h>

int main(void) {
	int a, b, c;
	int max = 0;
	int last1 = 0;
	int last2 = 0;

	scanf("%d %d %d", &a, &b, &c);
	max = a;
	last1 = b;
	last2 = c;

	if (max < b) {
		max = b;
		last1 = a;
	}
	if (max < c) {
		max = c;
		if (last1 == a)
			last2 = b;
		else
			last2 = a;
	}

	if (max >= last1 + last2)
		max = last1 + last2 - 1;

	printf("%d \n", max + last1 + last2);
}