#include<stdio.h>
#pragma warning (disable : 4996)

int main() 
{
	int num1, num2;
	while (1) {
		num1 = 0, num2 = 0; // �ʱ�ȭ �ȼ�
		printf("# �ΰ��� ������ �Է��ϼ��� : ");
		scanf("%d %d",&num1,&num2);
		if (num1 != '\0' && num2 != '\0') {
			if (num1 >= num2) {
				printf("%d - %d = %d\n", num1, num2, num1 - num2);
			}
			else {
				printf("%d - %d = %d\n", num2, num1, num2 - num1);
			}
		}
		else {
			break;
		}
	}
	return 0;
}