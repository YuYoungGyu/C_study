#include<stdio.h>
#pragma warning (disable : 4996)

int main() 
{
	double height, sum = 0, avg; // Ű ���� �޴� ����, �հ�, ���
	int i = 0;
	for (i; i < 5; i++) {
		printf("- %d �� �л��� Ű��? ", i + 1);
		scanf("%lf",&height);
		sum += height;
	}
	avg = sum / 5;
	printf("�ټ� ���� ��� Ű�� %.1lf cm �Դϴ�.\n", avg);

	return 0;
}