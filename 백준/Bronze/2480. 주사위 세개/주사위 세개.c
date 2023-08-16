#include <stdio.h>

int check(int x, int y, int z) {
	if (x == y || x == z)
		return x;
	else
		return y;
	return 0;
}

int size(int x, int y, int z) {
	if (x > y) {
		if (x > z)
			return x;
		else if (x < z)
			return z;
	}
	else if (x < y) {
		if (y > z)
			return y;
		else if (y < z)
			return z;
	}
	return 0;
}

int	comp(int x, int y, int z) {
	if (x == y && y == z && x == z)
		return 1;
	else if (x != y && y != z && x != z)
		return 0;
	return -1;
}

int main(void) {
	int x, y, z;
	int result, sum;

	scanf("%d %d %d", &x, &y, &z);
	result = comp(x, y, z);
	if (result == 1)
		sum = 10000 + 1000 * x;
	else if (result == 0)
		sum = size(x, y, z) * 100;
	else
		sum = 1000 + check(x, y, z) * 100;
	printf("%d \n", sum);
}