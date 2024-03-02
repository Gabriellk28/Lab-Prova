#include <stdio.h>

int mdc(int a, int b)
{
  if(b == 0){
    return a;
  } else{
    return mdc(b, a%b);
  }
}

int main(void)
{
  int a, b;

  printf("Informe dois números inteiros:\n");
  scanf(" %d %d", &a, &b);

  printf("MDC(%d, %d) = %d\n", a, b, mdc(a,b));

  return 0;
}
