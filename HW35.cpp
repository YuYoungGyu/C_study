#include<stdio.h>
#pragma warning (disable : 4996)

int main() 
{
	int i = 1;
	int inputNum, total = 0; // �Է¹��� ��������, �� ��
	for (i; i <= 5; i++) {
		printf("0���� ū���� �Է��Ͻÿ�(%d ��°) : ",i);
		scanf("%d",&inputNum);
		if (inputNum > 0) { total += inputNum; i++;}
		i--;
	}
	printf("�Էµ� ���� �� �� : %d\n",total);

	return 0;
}
