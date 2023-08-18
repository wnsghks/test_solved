#include <stdio.h>

void num(int *std) {

}

int main(void) {
	int std[30];
	int idx;
	int check = 0;

	for (int set = 0; set < 30; set++)
		std[set] = 0;
	for (int i = 1; i <= 28; i++) {
		scanf("%d", &idx);
		std[idx - 1] = 1;
	}
	for (int j = 0; j < 30; j++) {
		if (std[j] == 0) {
			check++;
			if (check < 3)
				printf("%d \n", j + 1);
		}
	}
}