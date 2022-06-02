#include <stdio.h>

int main(void)
{
  double i;
  double sum = 0;

  for (i = 1; i<=1000; i++) 
    {
    sum+=1/(double)i;
    }
  printf("A soma é: %f", sum);

return 0;
}