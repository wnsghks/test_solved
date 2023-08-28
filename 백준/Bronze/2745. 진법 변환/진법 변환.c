#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
	char s[36] = {0};
	int base = 0;
	int len = 0;
	int result = 0;
	int idx = 0;
	int change = 0;

	scanf("%s %d", s, &base);
	len = strlen(s);
	for (int i = len - 1; i >= 0; i--) {
		if ('A' <= s[idx] && s[idx] <= 'Z')
			change = s[idx] - 55;
		else
			change = s[idx] - '0';
		result += change * pow(base, i);
		idx++;
	}

	printf("%d \n", result);
}