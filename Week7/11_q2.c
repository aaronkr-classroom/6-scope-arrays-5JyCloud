// 11_q2.c
#include <stdio.h>

int result;

void Test()
{
  int result = 5;
  result++;
}

int main(void)
{

  Test();
  printf("result: %d", result);
  return 0;
}