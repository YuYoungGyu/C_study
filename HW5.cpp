#include <stdio.h>
#pragma warning(disable : 4996)
#define HAVE_TO_PAY 660 // �⺻���
#define M_PER_W 88.5 // ��Ʈ�� �����

int inputW();
void printPay(double,double);

int main() 
{
	double total,tax; // ��ü���, ����
	int W = inputW(); // ���� ��뷮
	total = W * M_PER_W + HAVE_TO_PAY;
	tax = total * 0.09;
	printPay(total,tax);
	return 0;
}

int inputW() 
{
	int W;
	printf("���� ��뷮�� �Է��ϼ���(kw) : ");
	scanf("%d",&W);
	return W;
}
void printPay(double total, double tax)
{
	double pay = total + tax; // ���� �����
	printf("���� ������� %lf �� �Դϴ�.", pay);
}