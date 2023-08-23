#include <stdio.h>
#include <string.h>

int main(void) {
	char str[1000005];
	int count[26] = {0};
	int len;
	int check = 0;
	char ans = '?';

	scanf("%s", str);
	len = strlen(str);
	for (int i = 0; i < len; i++) {
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] -= 32;

		if ('A' <= str[i] && str[i] <= 'Z')
            count[str[i] - 'A'] += 1;
	}

	for (int j = 0; j < 26; j++) {
		if (count[j] == check)
			ans = '?';
		else if (count[j] > check) {
			check = count[j];
			ans = j + 'A';
		}
	}

	printf("%c", ans);
    
    return (0);
}