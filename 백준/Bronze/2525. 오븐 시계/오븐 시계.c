#include <stdio.h>

int main(void) {
	int hour, minute;
	int time;

	scanf("%d %d", &hour, &minute);
	scanf("%d", &time);
	minute += time;
	if (minute >= 60) {
		hour += minute / 60;
		minute %= 60;
	}
	if (hour >= 24)
		hour -= 24;
	printf("%d %d", hour, minute);
}