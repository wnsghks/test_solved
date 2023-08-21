#include <stdio.h>
#include <string.h>

int comp(char *n1, char *n2) {
	for (int j = 0; j < strlen(n1); j++) {
		if (n1[j] > n2[j])
			return 1;
		else if (n2[j] > n1[j])
			return -1;
	}
	return 0;
}

int main(void) {
	char n1[4], n2[4];
	int check;

	//자리먼저 바꾸기
	scanf("%s %s", n1, n2);
	for (int i = 0; i <= strlen(n1) / 2; i++) {
		int temp1, temp2;

		temp1 = n1[strlen(n1) - i - 1];
		n1[strlen(n1) - i - 1] = n1[i];
		n1[i] = temp1;

		temp2 = n2[strlen(n2) - i - 1];
		n2[strlen(n2) - i - 1] = n2[i];
		n2[i] = temp2;
	}

	//한자리씩 비교하는 함수
	check = comp(n1, n2);
	if (check == 1)
		printf("%s", n1);
	else if (check == -1)
		printf("%s", n2);
	else
		printf("%s", n1);
}