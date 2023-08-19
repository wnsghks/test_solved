#include <stdio.h>
#include <string.h>

int main(void) {
	int n;
	int sum = 0;
	char s[100];

	scanf("%d", &n);
	scanf("%s", s);
	for (int i = 0; i < n; i++) {
		sum = sum + (s[i] - 48);
	}
	printf("%d", sum);
}