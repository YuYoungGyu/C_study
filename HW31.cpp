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
	printf("���� �ܾ��� %d�� �Դϴ�.\n\n",money);
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
		printf("# �޴��� �Է��Ͻÿ�(i-��ȥ, o-���, q-����) : ");
		scanf("%c", &input);
		while (getchar() != '\n') {
			printf("* �߸� �Է��ϼ̽��ϴ�.\n\n");
			myflush();
			printf("# �޴��� �Է��Ͻÿ�(i-��ȥ, o-���, q-����) : ");
			scanf("%c", &input);
		}
		if ((input == 'i') || (input == 'o') || (input == 'q')) { break; }
		printf("* �߸� �Է��ϼ̽��ϴ�.\n\n");
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
		printf("* �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� : ");
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
	money_de = inputInt("# �Աݾ��� �Է��ϼ��� : ");
	while (1) {
		if (money_de >=0) { 
			*money += money_de;
			break; 
		}
		else {
			money_de = inputInt("* �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� : ");
		}
	}
	printf("* ���� �ܾ��� %d�� �Դϴ�.\n\n",*money);
}
void withdraw(int* money)
{
	int money_wi;
	money_wi = inputInt("# ��ݾ��� �Է��ϼ��� : ");
	while (1) {
		if (money_wi > *money) {
			printf("* �ܾ��� �����մϴ�.\n");
			break;
		}
		else if (money_wi >= 0) {
			*money -= money_wi;
			break;
		}
		else {
			money_wi = inputInt("* �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� : ");
		}
	}
	printf("* ���� �ܾ��� %d�� �Դϴ�.\n\n", *money);
}