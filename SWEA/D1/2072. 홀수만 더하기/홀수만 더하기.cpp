#include <stdio.h>

int main(void) {
  int time = 0;
    scanf("%d", &time);
  int num = 10;

  for(int i = 1; i <= time; i++) {
    int arr[num];
    int sum = 0; 

    for(int j = 0; j < num; j++) {
      scanf("%d", &arr[j]);
      if (arr[j] % 2 != 0)
        sum += arr[j];
    }
    
    printf("#%d %d \n", i, sum);
  }
  return 0;
}