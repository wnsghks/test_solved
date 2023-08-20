#include <stdio.h>
#include <string.h>

int main(void) {
	int t, r;
	char s[50];

	scanf("%d", &t);
	for (char i = 0; i < t; i++) {
		scanf("%d %s", &r, s);
		for (int idx = 0; idx < strlen(s); idx++) {
			for (int j = 0; j < r; j++)
				printf("%c", s[idx]);
		}
	    printf("\n");
    }
}