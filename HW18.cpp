#include <stdio.h>
#pragma warning(disable : 4996)

int inputAge();
int inputMember();
int printPay(int,int);
int printDis(int, int);
void printTotal(int, int);

int main()
{
	int age, member,enter,pay,dis; //����,��,1�δ� �����,�� �����,���� �ݾ�
	age = inputAge();
	member = inputMember();
	printf("\n");
	// 1�δ� �����
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
	printf("���尴�� ���̸� �Է��Ͻÿ� : ");
	scanf("%d",&age);
	return age;
}
int inputMember()
{
	int member;
	printf("���尴�� ���� �Է��Ͻÿ� : ");
	scanf("%d", &member);
	return member;
}
int printPay(int member, int enter)
{
	int pay = member * enter;
	printf("����� => %d��\n",pay);
	return pay;
}
int printDis(int member, int enter) {
	int dis = 0;
	if (member >= 5) {
		dis = member * enter * 0.1; 
	}
	printf("���αݾ� => %d��\n",dis);
	return dis;
}
void printTotal(int pay, int dis) 
{
	printf("����ݾ� => %d��\n",pay-dis);
	return;
}