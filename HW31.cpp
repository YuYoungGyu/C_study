#include<stdio.h>
#pragma warning (disable : 4996)

char menu();
int inputInt(const char*);
void deposit(int*);
void withdraw(int*);
void myflush();

int main() 
{
	char m;
	int money = 0;
	printf("현재 잔액은 %d원 입니다.\n\n",money);
	while (1) {
		m = menu();
		if (m == 'q') { break; }
		switch (m) {
		case 'i': 
			deposit(&money);
			break;
		case 'o': 
			withdraw(&money);
			break;
		default:;
		}
	}
	return 0;
}
char menu()
{
	char input;
	while (1) {
		printf("# 메뉴를 입력하시오(i-결혼, o-출금, q-종료) : ");
		scanf("%c", &input);
		while (getchar() != '\n') {
			printf("* 잘못 입력하셨습니다.\n\n");
			myflush();
			printf("# 메뉴를 입력하시오(i-결혼, o-출금, q-종료) : ");
			scanf("%c", &input);
		}
		if ((input == 'i') || (input == 'o') || (input == 'q')) { break; }
		printf("* 잘못 입력하셨습니다.\n\n");
	}
	return input;
}
int inputInt(const char* msg)
{
	int input;
	printf("%s",msg);
	scanf("%d",&input);
	while (getchar() != '\n') {
		myflush();
		printf("* 잘못 입력하셨습니다. 다시 입력하십시오 : ");
		scanf("%d", &input);
	}
	return input;
}
void myflush()
{
	while (getchar() != '\n') { ; }
}
void deposit(int* money)
{
	int money_de;
	money_de = inputInt("# 입금액을 입력하세요 : ");
	while (1) {
		if (money_de >=0) { 
			*money += money_de;
			break; 
		}
		else {
			money_de = inputInt("* 잘못 입력하셨습니다. 다시 입력하십시오 : ");
		}
	}
	printf("* 현재 잔액은 %d원 입니다.\n\n",*money);
}
void withdraw(int* money)
{
	int money_wi;
	money_wi = inputInt("# 출금액을 입력하세요 : ");
	while (1) {
		if (money_wi > *money) {
			printf("* 잔액이 부족합니다.\n");
			break;
		}
		else if (money_wi >= 0) {
			*money -= money_wi;
			break;
		}
		else {
			money_wi = inputInt("* 잘못 입력하셨습니다. 다시 입력하십시오 : ");
		}
	}
	printf("* 현재 잔액은 %d원 입니다.\n\n", *money);
}