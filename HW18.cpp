#include <stdio.h>
#pragma warning(disable : 4996)

int inputAge();
int inputMember();
int printPay(int,int);
int printDis(int, int);
void printTotal(int, int);

int main()
{
	int age, member,enter,pay,dis; //나이,수,1인당 입장료,총 입장료,할인 금액
	age = inputAge();
	member = inputMember();
	printf("\n");
	// 1인당 입장료
	if (age < 20) {
		if (age <= 7) {
			enter = 500;
		}
		else if(age >=14){
			enter = 1000;
		}
		else {
			enter = 700;
		}
	}
	else{
		if (age >= 56) {
			enter = 500;
		}
		else {
			enter = 1500;
		}
	}

	pay = printPay(member, enter);
	dis = printDis(member,enter);
	printTotal(pay, dis);
	return 0;
}

int inputAge()
{
	int age;
	printf("입장객의 나이를 입력하시오 : ");
	scanf("%d",&age);
	return age;
}
int inputMember()
{
	int member;
	printf("입장객의 수를 입력하시오 : ");
	scanf("%d", &member);
	return member;
}
int printPay(int member, int enter)
{
	int pay = member * enter;
	printf("입장료 => %d원\n",pay);
	return pay;
}
int printDis(int member, int enter) {
	int dis = 0;
	if (member >= 5) {
		dis = member * enter * 0.1; 
	}
	printf("할인금액 => %d원\n",dis);
	return dis;
}
void printTotal(int pay, int dis) 
{
	printf("결재금액 => %d원\n",pay-dis);
	return;
}