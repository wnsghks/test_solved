#include <stdio.h>
#include <string.h>

int main(void) {
	int num;
	int base;
	char result[36] = {0};
	int len = 0;

	scanf("%d %d", &num, &base);
	while (num >= base) {
		int re = num % base;

		if (re <= 9)
			result[len] = re + '0';
		else
			result[len] = re + 55;
		len++;
		num /= base;
	}
	if (num <= 9)
		result[len] = num + '0';
	else
		result[len] = num + 55;

	len = strlen(result);
	for (int i = len - 1; i >= 0; i--)
		printf("%c", result[i]);
}