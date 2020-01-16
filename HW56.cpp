#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning (disable : 4996)

void input_number(int(*)[5],int);
void cal_sum(int(*)[5], int*, int*, int*, int);
void print_result(int, int, int);

int main() 
{
	int ary[5][5];
	int sum1 = 0, sum2 = 0, sum3 = 0;
	int row = sizeof(ary) / sizeof(ary[5]);
	srand(time(NULL));
	input_number(ary,row);
	cal_sum(ary, &sum1, &sum2, &sum3, row);
	print_result(sum1, sum2, sum3);
	return 0;
}
void input_number(int(*ary)[5],int row)
{
	int i, j;
	for (i = 0; i < row; i++) {
		printf("%d¹ø Çà : ",i);
		for (j = 0; j < 5; j++) {
			ary[i][j] = rand() % 20 + 1;
			printf("%3d",ary[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void cal_sum(int(*ary)[5], int* s1, int* s2, int* s3, int row)
{
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < 5; j++) {
			if (i < j) { *s2 += ary[i][j]; }
			else if (i > j) { *s3 += ary[i][j]; }
			else { *s1 += ary[i][j]; }
		}
	}
}
void print_result(int s1, int s2, int s3)
{
	printf("sum1 = %d\n", s1);
	printf("sum2 = %d\n", s2);
	printf("sum3 = %d\n", s3);
}