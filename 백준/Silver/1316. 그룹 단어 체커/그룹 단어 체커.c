#include <stdio.h>
#include <string.h>

int main(void) {
	char s[101] = {0};
	int alpha[26] = {0};
	int group = 0;
	int len = 0;
	int time = 0;
	int flag;

	scanf("%d", &time);
	for (int i = 0; i < time; i++) {
		scanf("%s", s);
		len = strlen(s);
		flag = 0; //매 검사마다 0이 되야하므로 이 위치에 존재
		for (int j = 0; j < len; j++) {
			//소문자 일때만 진행
			if ('a' <= s[j] && s[j] <= 'z') {
				//aba처럼 최소 확인해야하는 경우가 s[2]일떼이므로
				//앞에 나왔던 숫자인지 판단
				if (j >= 2) {
					for (int k = 0; k < j; k++) {
						if (s[j] == s[k]) {
							//사이에 다른 문자가 있을 때 만 적용
							if (s[j] != s[k + 1]) {
								flag = 1;
								break ;
							}
						}
					}
				}
				if (flag == 1)
					break ;

				//연속한 숫자인지 검사
				if (s[j] == s[j + 1])
					j++;
			}
		}
		if (flag == 0)
			group++;
	}

	printf("%d", group);
}