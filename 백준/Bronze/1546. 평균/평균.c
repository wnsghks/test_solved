#include <stdio.h>

int main(void) {
	int n, high;
	float grade[1000];
	float avg;

	scanf("%d", &n);
	//n번 만큼 성적 입력
	for (int idx = 0; idx < n; idx++)
		scanf("%f", &grade[idx]);

	//최고점 구하기
	high = grade[0];
	for (int i = 1; i < n; i++) {
		if (high < grade[i])
			high = grade[i];
	}

	//성적 수정후 평균 계산
	avg = 0;
	for (int j = 0; j < n; j++) {
		grade[j] = grade[j] / high * 100;
		avg += grade[j];
	}

	printf("%f", avg / n);
}