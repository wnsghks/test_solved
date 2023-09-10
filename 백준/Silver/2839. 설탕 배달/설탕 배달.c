#include <stdio.h>

int main(void) {
	int n;
	int	cnt = 0;

	scanf("%d", &n);

	while (1) {
		if (n % 5 != 0) {
			n -= 3;
			cnt++;
		}
		if (n % 5 == 0) {
			cnt += n / 5;
			n -= n / 5 * 5;
		}
		if (n <= 0) {
			if (n < 0)
				cnt = -1;
			break ;
		}
	}

	printf("%d \n", cnt);
}