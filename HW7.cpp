#include<stdio.h>
#pragma warning (disable : 4996)

void printResult(double,double);

int main() 
{
	double dis, val; // �Ÿ� �ü� 

	int i = 0;
	while (i < 3) {
		printf("* �Ÿ��� �Է��Ͻÿ�(km����) : ");
		scanf("%lf",&dis); // �Ÿ��Է�
		printf("* �ü��� �Է��Ͻÿ�(km/h����) : ");
		scanf("%lf",&val); // �ü� �Է�
		printResult(dis,val); // �ð��� ���ؼ� ���
		printf("\n");
		i++;
	}
}

void printResult(double d, double v) 
{
	double time, s; // �ɸ� �ð�, ��
	int h, m; // ��, ��

	time = d / v;

	h = (int)time;
	time = (time - h)*60; // �� ������ ��ȯ
	m = (int)time;
	time = (time - m) * 60;
	s = time;

	printf("%.2lf = >%d�ð� %d�� %.3lf �� �ҿ��\n", d, h, m, s);
}