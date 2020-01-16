#include<stdio.h>
#pragma warning(disable : 4996)

int inputF();
void printC(double);

int main() 
{
	double C;
	int F = inputF();
	C = (double)5 / 9 * (F - 32);
	printC(C);

	return 0;
}

int inputF()
{
	int F;
	printf("화씨 온도를 입력하세요 : ");
	scanf("%d", &F);
	return F;
}
void printC(double C)
{
	printf("섭씨 온도는 %.1lf 도입니다.\n", C);
}