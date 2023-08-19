#include <stdio.h>
#include <string.h>

int main(void) {
	char s[101];

	scanf("%s", s);
	for (char i = 'a'; i <= 'z'; i++) {
		for (int idx = 0; idx < strlen(s); idx++) {
			if (i == s[idx]) {
				printf("%d ", idx);
				break ;
			}
			if (idx == strlen(s) - 1)
				printf("-1 ");
		}
	}
}