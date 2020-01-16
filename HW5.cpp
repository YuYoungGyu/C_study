#include <stdio.h>
#pragma warning(disable : 4996)
#define HAVE_TO_PAY 660 // 기본요금
#define M_PER_W 88.5 // 와트당 사용요금

int inputW();
void printPay(double,double);

int main() 
{
	double total,tax; // 전체요금, 세금
	int W = inputW(); // 전기 사용량
	total = W * M_PER_W + HAVE_TO_PAY;
	tax = total * 0.09;
	printPay(total,tax);
	return 0;
}

int inputW() 
{
	int W;
	printf("전기 사용량을 입력하세요(kw) : ");
	scanf("%d",&W);
	return W;
}
void printPay(double total, double tax)
{
	double pay = total + tax; // 전기 사용요금
	printf("전기 사용요금은 %lf 원 입니다.", pay);
}