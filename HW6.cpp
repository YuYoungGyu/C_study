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
	printf("ȭ�� �µ��� �Է��ϼ��� : ");
	scanf("%d", &F);
	return F;
}
void printC(double C)
{
	printf("���� �µ��� %.1lf ���Դϴ�.\n", C);
}