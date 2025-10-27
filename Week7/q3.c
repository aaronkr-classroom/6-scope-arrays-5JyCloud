//Q3
//data 배열의 각 저장된 값 중에서 가장 큰 값을 찾는 코드를 작성해보세요.

#include <stdio.h>

int FindMax(short arr[]) 
{
	int max = arr[0];
	for (int i = 0; i < 9; i++) {
		if (max > arr[i])
			continue;
		else
			max = arr[i];
	}
	return max;
}
int main() 
{
	short data[9] = {4,6,9,8,7,2,5,1,3};
	int Max_num = 0;
	
	Max_num = FindMax(data);
	printf("가장 큰 값: %d\n", Max_num);
	return 0;
}