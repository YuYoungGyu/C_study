#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#pragma warning (disable : 4996)

void randomNumber(int(*)[4],int);
void printResult(int(*)[4], int);

int main() 
{
	int array[3][4],row;
	row = sizeof(array) / sizeof(array[0]);
	srand(time(NULL));
	randomNumber(array, row);
	printResult(array, row);

	return 0;
}

void randomNumber(int (*array)[4] , int row)
{
	int i, j;
	for (i = 0; i<row; i++) {
		for (j = 0; j < 4; j++) { 
			array[i][j] = rand() % 9 + 1; 
		}
	}
}
void printResult(int(*array)[4], int row)
{
	int i, j;
	int rowtotal, columntotal[4] = {0,};
	for (i = 0; i < row ; i++) {
		printf("%d행\t:",i);
		rowtotal = 0;
		for (j = 0; j < 4; j++) {
			printf("%3d", array[i][j]);
			rowtotal += array[i][j];
			columntotal[j] += array[i][j];
		}
		printf("\t%d행의 합 : %d\n",i,rowtotal);
	}
	printf("열의 합\t: ");
	for (i = 0; i < 4; i++) {
		printf("%3d", columntotal[i]);
	}
	printf("\n");
}
