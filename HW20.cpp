#include<stdio.h>
#pragma warning (disable : 4996)

int input(const char*);
int cal_gloss_pay(int);
int cal_taxes(int);
void printResult(int, int);

int main()
{
	int time, gloss_pay, taxes;
	time = input("* 1주일간의 근무시간을 입력하시오 :");
	gloss_pay = cal_gloss_pay(time);
	taxes = cal_taxes(gloss_pay);

	printResult(gloss_pay, taxes);
	
	return 0;
}
int input(const char* msg)
{
	int input;
	printf("%s", msg);
	scanf("%d", &input);
	return input;
}
int cal_gloss_pay(int time) 
{
	int gloss_pay;

	if (time <= 40) {
		gloss_pay = time * 3000;
	}
	else {
		gloss_pay = 40 * 3000;
		gloss_pay += (time - 40) * 3000 * 1.5;
	}
	return gloss_pay;
}
int cal_taxes(int gloss_pay)
{
	int taxes;
	if (gloss_pay <= 100000) {
		taxes = gloss_pay * 0.15;
	}
	else {
		gloss_pay -= 100000;
		taxes = 100000 * 0.15 + gloss_pay * 0.25;
	}
	return taxes;
}
void printResult(int gloss_pay,int taxes)
{
	int net_pay = gloss_pay - taxes;
	printf("# 총수입 : %d\n", gloss_pay);
	printf("# 세 금  : %d\n", taxes);
	printf("# 실수입 : %d\n", net_pay);
}