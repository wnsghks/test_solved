#include <stdio.h>

int main(void) {
	int hour, minute;
	int sum;

	scanf("%d %d", &hour, &minute);
	sum = hour * 60 + minute;
	if (sum < 45) {
		sum += 24 * 60;
	}
	sum -= 45;
	hour = sum / 60;
	minute = sum % 60;
	printf("%d %d \n", hour, minute);
}