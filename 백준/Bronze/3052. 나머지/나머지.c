#include <stdio.h>

int main(void) {
	int num[10], result;
	unsigned int a;

	for (int i = 0; i < 10; i++) {
		scanf("%u", &a);
		num[i] = a % 42;
	}
	result = 0;
	for (int check = 0; check < 10; check++) {
		int count = 0;
		for (int comp = check + 1; comp < 10; comp++) {
				if (num[check] == num[comp])
					count++;
		}
		if (count == 0)
			result++;
	}
	printf("%d", result);
}