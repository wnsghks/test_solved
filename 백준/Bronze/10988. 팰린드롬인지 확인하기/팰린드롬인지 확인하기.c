#include <stdio.h>
#include <string.h>

int main(void) {
	char str[101];
	int flag = 0;

	scanf("%s", str);
	for (int i = 0; i <= strlen(str) / 2; i++) {
		if (str[i] == str[strlen(str) - i - 1])
			flag = 1;
		else {
			flag = 0;
			break ;
		}
	}
	printf("%d", flag);
}