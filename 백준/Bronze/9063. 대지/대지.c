#include <stdio.h>

int main(void) {
	int n;
	int min_x = 10000;
	int max_x = -10000;
	int min_y = 10000;
	int max_y = -10000;
	int x, y;

	scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        if (max_x < x)
            max_x = x;
        if (min_x > x)
            min_x = x;
        if (min_y > y)
            min_y = y;
        if (max_y < y)
            max_y = y;
	}

	printf("%d \n", (max_x - min_x) * (max_y - min_y));
}