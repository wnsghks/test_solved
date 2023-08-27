#include <stdio.h>
#include <string.h>

int main(void) {
	char s[5][15] = {0};

	for (int i = 0; i < 5; i++) {
		scanf("%s", s[i], sizeof(s));
	}

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
		    if (s[j][i] != '\0')
                printf("%c", s[j][i]);
        }
	}
}