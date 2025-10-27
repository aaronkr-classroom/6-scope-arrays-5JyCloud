// local.c
#include <stdio.h>

int Sum(int x, int y)
{
  int result = x + y;
  return result;
}

int main(void)
{
  int a = 3, b = 5;
  result = Sum(a, b);

  printf("%d + %d = %d", a, b, result);

  return 0;
}