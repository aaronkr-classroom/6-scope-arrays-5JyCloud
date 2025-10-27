// 2d_arr.c

#include <stdio.h>

#define NUM_STDS 3
#define NUM_GRADES 4

float calcAvg(int data[])
{
  int sum = 0;
  for (int i = 0; i < NUM_GRADES; i++)
  {
    sum += data[i];
  }
  return sum / (float)NUM_GRADES;
}

int main(void)
{
  // [3학생][4개의 점수]
  int grades[NUM_STDS][NUM_GRADES] = {
      {85, 45, 70, 93}, // 학생 1
      {74, 86, 93, 45}, // 학생 2
      {67, 37, 99, 97}  // 학생 3
  };

  // 각 학생의 점수 출력
  printf("student grades: \n");
  // 모든 학생의 루프
  for (int i = 0; i < NUM_STDS; i++)
  {
    // 첫 번째 index가 0
    printf("Student %d: ", i + 1);
    // 해당 학생의 모든 점수 루프
    for (int j = 0; j < NUM_GRADES; j++)
    {
      printf("%d ", grades[i][j]);
    }
    printf("Average: %.2f\n", calcAvg(grades[i]));
  }

  return 0;
}