#include<stdio.h>
#pragma warning (disable : 4996)

int main() 
{
	int his, cul, art, total; //���� ��ȭ ���� ����
	double avg; // ���

	printf("����, ����, ���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d",&his,&cul,&art);

	total = his + cul + art;
	avg = (double)total / 3;

	printf("������ %d �̰� ����� %.2lf �Դϴ�.\n", total, avg);

	return 0;
}