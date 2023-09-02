#include <stdio.h>

int main(void) {
	int a, b, v;
	int day = 0;
	int check, cal;

	scanf("%d %d %d", &a, &b, &v);
	check = (v - b) % (a - b);
	cal = (v - b) / (a - b);
	day = check == 0 ? cal : cal + 1;

	printf("%d \n", day);
}