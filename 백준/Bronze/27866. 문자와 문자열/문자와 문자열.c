#include <stdio.h>

int main(void) {
	char 	str[1000];
	int		n;

	scanf("%s %d", str, &n);
	printf("%c \n", str[n - 1]);
}