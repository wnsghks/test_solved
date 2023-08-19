#include <stdio.h>
#include <string.h>

int main(void) {
	int n;
	char str[1001];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int len = 0;

		scanf("%s", str);
		len = strlen(str);
		printf("%c%c \n", str[0], str[len - 1]);
	}
}