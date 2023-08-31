#include <stdio.h>

int main(void) {
	int num = 0;
	int count[4] = {0};
	int value[4] ={25, 10, 5, 1};

	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		int money = 0;

		scanf("%d", &money);
		for (int j = 0; j < 4; j++) {
			count[j] = money / value[j];
			money =  money - (money / value[j] * value[j]);
		}

		printf("%d %d %d %d \n", count[0], count[1], count[2], count[3]);
	}
}