#include <stdio.h>
#include <string.h>

int main(void) {
	char str[101];

	scanf("%s", str);
	printf("%lu", strlen(str));
}