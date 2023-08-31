#include <stdio.h>

int main(void) {
	int idx, i;
	int range = 0;
	int sub = 0;
	int up, down;

	scanf("%d", &idx);
	i = 0;
	while (range < idx) {
		range = range + (4 * i + 1);
		i++;
	}
	sub = range - idx;
	if (2 * i - 1 >= sub + 1) {
		up = 1;
		down = 2 * i - 1;
		for (int j = 0; j < sub; j++) {
			up++;
			down--;
		}
	}
	else {
		up = 2 * i - 2 ;
		down = 1;
		for (int j = 1; j < sub - (2 * i - 2); j++) {
			up--;
			down++;
		}
	}

	printf("%d/%d \n", up, down);
}