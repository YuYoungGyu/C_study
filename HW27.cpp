#include<stdio.h>
#pragma warning (disable : 4996)

int input(const char* );
void myflush();

int main() 
{
	int i, weight;
	for (i = 1; i <= 10; i++) { // 10ȸ �ݺ�
		weight = input("# ����� ���Ը� �Է��ϼ���(���� : g) : ");
		if (weight > 500) {
			printf("* Ÿ���� ������ �峭���� ���ÿ�~^^\n");
			i--;
		}
		else if(weight < 150) {
			printf("* ���߸��� ������ �峭���� ���ÿ�~^^\n");
			i--;
		}
		else {
			printf("* ���� �ް��� �� : %d\n", i);
		}
	}
	printf("\n*** �ް��� ������ �������ϴ�.\n");
	return 0;
}

int input(const char* msg)
{
	int input;
	printf("%s",msg);
	scanf("%d", &input);
	while (getchar() != '\n') { // �Է¹��� Ȯ��
		myflush(); // �Է¹��� ����
		printf("%s", msg); 
		scanf("%d", &input); // �ٽ� �Է¹ޱ�
	}
	return input;
}
void myflush() 
{
	while (getchar() != '\n') { ; }
}