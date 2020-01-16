#include<stdio.h>
#pragma warning (disable : 4996)

int main() 
{
	double height, sum = 0, avg; // 키 값을 받는 변수, 합계, 평균
	int i = 0;
	for (i; i < 5; i++) {
		printf("- %d 번 학생의 키는? ", i + 1);
		scanf("%lf",&height);
		sum += height;
	}
	avg = sum / 5;
	printf("다섯 명의 평균 키는 %.1lf cm 입니다.\n", avg);

	return 0;
}