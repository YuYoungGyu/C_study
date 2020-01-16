#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning (disable : 4996)

int input(const char*);
int printResult(int,int);

int main() 
{
	int user, computer; // ����, ��ǻ��
	int win=0, tie=0, result; // �¸�, ���, ���(��1,��2,��0)
	srand(time(NULL));
	while (1) {
		user = input("# ������ 1, ������ 2, ���� 3 �߿��� �����ϼ��� : ");
		computer = rand() % 3 + 1;
		result = printResult(user, computer);
		if (result == 1) {
			printf("�̰���ϴ�.\n");
			win++;
		}
		else if(result == 2){
			printf("�����ϴ�.\n");
			tie++;
		}
		else {
			printf("����� �����ϴ�.\n");
			break;
		}
	}
	printf("���Ӱ�� : %d �� %d ��\n",win,tie);
	return 0;
}
int input(const char* msg)
{
	int input;
	printf("%s", msg);
	scanf("%d", &input);
	while (1) {
		if (input >= 1 && input <= 3) { break; }
		else {
			while (getchar() != '\n') { ; } // �Է¹��� ����
			printf("���Է��ϼ���.\n");
			printf("%s", msg);
			scanf("%d", &input); // �ٽ� �Է¹ޱ�
		}
	}
	return input;
}
int printResult(int user, int computer)
{
	int result; // �¸�1 ���2 �й�0
	if (computer == 1) {
		char u_c[10] = "����";
		if (computer == 1) {
			char c_c[10] = "����";
			printf("����� %s ����, ��ǻ�ʹ� %s ���� : ", u_c, c_c);
		}
		else if (computer == 2) {
			char c_c[10] = "����";
			printf("����� %s ����, ��ǻ�ʹ� %s ���� : ", u_c, c_c);
		}
		else {
			char c_c[10] = "��";
			printf("����� %s ����, ��ǻ�ʹ� %s ���� : ", u_c, c_c);
		}
	}
	else if (computer == 2) {
		char u_c[10] = "����";
		if (computer == 1) {
			char c_c[10] = "����";
			printf("����� %s ����, ��ǻ�ʹ� %s ���� : ", u_c, c_c);
		}
		else if (computer == 2) {
			char c_c[10] = "����";
			printf("����� %s ����, ��ǻ�ʹ� %s ���� : ", u_c, c_c);
		}
		else {
			char c_c[10] = "��";
			printf("����� %s ����, ��ǻ�ʹ� %s ���� : ", u_c, c_c);
		}
	}
	else {
		char u_c[10] = "��";
		if (computer == 1) {
			char c_c[10] = "����";
			printf("����� %s ����, ��ǻ�ʹ� %s ���� : ", u_c, c_c);
		}
		else if (computer == 2) {
			char c_c[10] = "����";
			printf("����� %s ����, ��ǻ�ʹ� %s ���� : ", u_c, c_c);
		}
		else {
			char c_c[10] = "��";
			printf("����� %s ����, ��ǻ�ʹ� %s ���� : ",u_c,c_c);
		}
	} // ���� ���
	if (user == computer) { result = 2; }
	else if ((user == computer - 1) || (user == computer + 2)) { result = 1; }
	else { result = 0; } // ��� ���
	return result;
}