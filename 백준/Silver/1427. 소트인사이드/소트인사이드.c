#include <stdio.h>
#include <string.h>

int main(void) {
	char n[10];
	char temp;
	int len;

	scanf("%s", n);
	len = strlen(n);
	for (int i = len; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (n[j] < n[j + 1]) {
				temp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = temp;
			}

		}
	}

	printf("%s \n", n);
}