#include <stdio.h>

int main(void) {
	int a1, a2, a3;

	scanf("%d %d %d", &a1, &a2, &a3);
	if (a1 + a2 + a3 != 180)
		printf("Error \n");
	else {
		if (a1 == a2 && a1 == a3 && a2 == a3)
			printf("Equilateral \n");
		else if (a1 == a2 || a1 == a3 || a2 == a3)
			printf("Isosceles \n");
		else
			printf("Scalene \n");
	}
}