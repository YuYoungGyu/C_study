#include<stdio.h>
#pragma warning (disable : 4996)
#define CREAM 500
#define SHRIMP 700
#define COLA 400

int inputMoney(const char*);
void printOPtion(int);

int main() 
{
	int money;
	while (1) {
		money = inputMoney("현재 당신의 소유 금액 입력 : ");
		if (getchar() != '\n') {
			printf("문자를 입력하셨습니다. 종료합니다.\n");
			break;
		}
		printOPtion(money);
	}
}

int inputMoney(const char* msg)
{
	int money;
	printf("%s",msg);
	scanf("%d", &money);
	return money;
}
void printOPtion(int money)
{
	int money_c = money;
	int i, j, k;
	for (i = 1; money >= i * CREAM; i++) {
		int money_1 = money - i * CREAM;
		for (j = 1; money_1 >= j * SHRIMP; j++) {
			int money_2 = money_1 - j * SHRIMP;
			for (k = 1; money_2 >= k * COLA; k++) {
				int money_3 = money_2 - k * COLA;
				if (money_3 == 0) { 
					printf("크림빵(%d 개), 새우깡(%d 봉지), 콜라(%d 병)\n", i, j, k); 
				}
			}
		}
	}
	printf("어떻게 구입 하시겠습니까?\n\n");
}