#include <stdio.h>

int main(void) {
	int max = 0;
	int last1, last2;

	while (1) {
		int a, b, c;

		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0)
			break ;

		max = a;
		last1 = b;
		last2 = c;
		if (max < b) {
			max = b;
			last1 = a;
		}
		if (max < c) {
			max = c;
			if (last1 == a)
				last2 = b;
			else
				last2 = a;
		}

		if (max >= last1 + last2)
			printf("Invalid \n");
		else {
			if (max == last1 && max == last2 && last1 == last2)
				printf("Equilateral \n");
			else if (max == last1 || max == last2 || last1 == last2)
				printf("Isosceles \n");
			else
				printf("Scalene \n");
		}
	}
}