#include <stdio.h>
#include <math.h>

int main(void) {
	int n = 2;
	int time = 0;

	scanf("%d", &time);
	for (int i = 0; i < time; i++) {
		n += (n - 1);
	}

	printf("%0.f \n", pow(n, 2));
}