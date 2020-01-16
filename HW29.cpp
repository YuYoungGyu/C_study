#include<stdio.h>
#pragma warning (disable : 4996)

int inputUint(const char*);
int transNumber(int);

int main() 
{
	int p1,p2,n, all_n = 0; //���� ��, �� ��, ������, �� ����
	p1 = inputUint("���� ��(P1) : ");
	while (1) {
		p2 = inputUint("���� ��(P2) : ");
		if (p1 > p2) {
			printf("���۰� ���� ū ���� �Է��Ͻÿ�.\n");
		}
		else { break; }
	}
	n = inputUint("������(N) : ");
	printf("\n�������� %d�� ���� ���\n",n);
	for (int i = p1; i <= p2; i++) {
		int rotate = 0;
		int trans_number = i;
		while (i) {
			if (trans_number < 10) { break; }
			trans_number = transNumber(trans_number);
			rotate++;
		}
		if (rotate == n) {
			all_n++;
			printf("%d\n",i); 
		}
	}
	printf("�� ���� : %d ��",all_n);
	return 0;
}
int inputUint(const char* msg)
{
	int input;
	printf("%s",msg);
	scanf("%d", &input);
	while (getchar() != '\n') {
		printf("�߸��� �Է��Դϴ�.\n");
		while (getchar() != '\n') { ; }
		printf("%s", msg);
		scanf("%d", &input);
		if (input > 0) { break; }
	}
	return input;
}
int transNumber(int num)
{
	int result;
	int step;
	int n1 = 1, n2 = 1, n3 = 1, n4 = 1;
	if (num >= 100) {
		if (num >= 1000) { step = 1; }
		else { step = 2; }
	}
	else{
		if (num >= 10) { step = 3; }
		else { step = 4; }
	}
	switch (step) {
	case 1:
		n4 = num / 1000; // 1000�� �ڸ�(10000�϶� 10�� ����)
		num -= n4 * 1000;
	case 2:
		n3 = num / 100; // 100�� �ڸ�
		num -= n3 * 100;
	case 3:
		n2 = num / 10; // 10�� �ڸ�
		num -= n2 * 10;
	default:
		n1 = num; // 1�� �ڸ�
	}
	result = n4 * n3 * n2 * n1; // �ʱⰪ�� 1�̱� �ʰ��ϴ� �ڸ����� ���꿡 ����X
	return result;
}