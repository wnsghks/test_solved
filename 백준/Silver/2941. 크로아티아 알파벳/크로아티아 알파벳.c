#include <stdio.h>
#include <string.h>

int main(void) {
	char s[101] = {0};
	int alph = 0;
	int len = 0;

	scanf("%s", s);
	len = strlen(s);
	for (int i = 0; i < len; i++) {
		if ('a' <= s[i] && s[i] <= 'z') {
			if (s[i] == 'l' && s[i + 1] == 'j')
				i++;
			if (s[i] == 'n' && s[i + 1] == 'j')
				i++;
			if (s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '=')
				i += 2;
			alph++;
		}
	}

	printf("%d", alph);
}