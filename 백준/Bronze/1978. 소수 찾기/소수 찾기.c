#include <stdio.h>

int main(void) {
	int n;
	int num;
	int check = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		num = 0;
		scanf("%d", &num);

	    for (int j = 2; j <= num; j++) {	
			if (j == num)
				check++;
            if (num % j == 0)
				break ;
		}
	}

	printf("%d \n", check);
}