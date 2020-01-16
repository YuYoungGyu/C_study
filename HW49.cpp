#include<stdio.h>
#pragma warning (disable : 4996)

void swap(int*,int);

int main() 
{
	int ary[] = {1,2,3,4,5,6,7,8};
	int arylen = sizeof(ary) / sizeof(int);
	printf("처음 배열에 저장된 값 : ");
	for (int i = 0; i < arylen; i++) {
		printf("%3d", ary[i]);
	}
	printf("\n");

	swap(ary, arylen);

	printf("바뀐 배열에 저장된 값 : ");
	for (int i = 0; i < arylen; i++) {
		printf("%3d", ary[i]);
	}
	printf("\n");

	return 0;
}

void swap(int* ary,int arylen) 
{
	int temp, i;
	for (i = 0; i < arylen / 2; i++) {
		temp = ary[i];
		ary[i] = ary[arylen - 1 - i];
		ary[arylen - 1 - i] = temp;
	}
}