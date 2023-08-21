#include <stdio.h>
#include <string.h>

int main(void) {
	char s[1000000];
	int word = 1;

	//[^\n]: \n를 입력하기 전까지, 공백을 포함한다는 뜻
	scanf("%[^\n]s", s);
    if (strlen(s) == 1 && s[0] == ' ') {
       printf("0");
       return 0;
    }
    
	for (int i = 1; i < strlen(s); i++) {
		if (i == strlen(s) - 1)
			break ;
		if (s[i] == ' ')
			word++;
	}
	printf("%d", word);
    
    return 0;
}