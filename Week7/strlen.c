// strlen.c

#include <stdio.h>
#include <string.h> // strlen(), strcpy(), strcat()

int string_length(char data[])
{
  int count = 0;
  while (data[count])
    count++;
  return count;
}

int main(void)
{
  int data_length, str_length;
  char data[10] = {'h', 'a', 'p', 'p', 'y', 0};
  data_length = string_length(data);
  str_length = strlen(data);         // C언어의 string.h에 있는 함수

  printf("data length = %d\n", data_length);
  printf("str length = %d\n", str_length);

  char data2[10] = {'a', 'b', 'c', 0};
  char result[16];

  printf("Result (0): %s", result);
  strcpy_s(result, strlen(result), data2); // result = "abc";
  printf("Result (cpy): %s", result);
  strcat_s(result, strlen(result), "def"); // result = "abcdef";
  printf("Result (cat): %s", result);


  return 0;
}