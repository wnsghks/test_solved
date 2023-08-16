#include <stdio.h>

int main(void) {
	int n, sum;
	int time;

	scanf("%d", &n);
	sum = 0;
	time = n;
	for (int i = 0; i < time; i++) {
		sum += n;
		n--;
	}
	printf("%d \n", sum);
}