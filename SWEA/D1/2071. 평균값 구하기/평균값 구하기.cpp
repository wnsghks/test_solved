#include <stdio.h>
#include <math.h>

int main (void){
  int test = 0;
  int count = 10;
  scanf("%d", &test);

  for(int i=1; i<=test; i++) {
    int num[count];
    int sum = 0;
    double result = 0;

    for(int j=0; j<count; j++) {
      scanf("%d", &num[j]);
      sum += num[j];
    }
    result = (double)sum / (double)count;
    printf("#%d %0.f \n", i, floor(result+0.5));
  }

  return 0;
}