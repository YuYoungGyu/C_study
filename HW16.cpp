#include<stdio.h>
#pragma warning (disable : 4996)

int input();
int calPay(int);
void printPay(int);

int main() 
{
	int stop, pay; //  ��, ���
	stop = input();
	pay = calPay(stop);
	printPay(pay);

	return 0;
}

int input()
{
	int stop;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d",&stop);
	return stop;
}
int calPay(int stop)
{
	int pay;
	if (stop <= 10) {
		if (stop >= 6) {
			pay = 800;
		}
		else {
			pay = 600;
		}
	}
	else {
		stop -= 10;
		pay = (stop + 1) / 2 * 100 + 800;
	}

	return pay;
}
void printPay(int pay)
{
	printf("��� : %d��\n",pay);
}