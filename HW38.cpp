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
		money = inputMoney("���� ����� ���� �ݾ� �Է� : ");
		if (getchar() != '\n') {
			printf("���ڸ� �Է��ϼ̽��ϴ�. �����մϴ�.\n");
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
					printf("ũ����(%d ��), �����(%d ����), �ݶ�(%d ��)\n", i, j, k); 
				}
			}
		}
	}
	printf("��� ���� �Ͻðڽ��ϱ�?\n\n");
}