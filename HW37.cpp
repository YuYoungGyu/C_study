#include<stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int day, day_c, gold = 0;

	printf("����� �ٹ��ϼ��� �Է��Ͻÿ� : ");
	scanf("%d", &day);
	while (1) {
		if (day > 0) { break; }
		while (getchar() != '\n') { ; }
		printf("�߸� �Է� �ϼ̽��ϴ�.\n");
		printf("����� �ٹ��ϼ��� �Է��Ͻÿ� : ");
		scanf("%d", &day);
	}

	day_c = day;
	int i = 1;
	while (1) {
		if (day_c >= i) {
			gold += i * i; 
			day_c -= i;
		}
		else { 
			gold += day_c * i;
			break; 
		}
		i++;
	}
	printf("�ٹ��� : %d �� / �� ��ȭ �� %d ��\n", day, gold);

	return 0;
}