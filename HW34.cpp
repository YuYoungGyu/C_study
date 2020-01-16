#include<stdio.h>
#pragma warning (disable : 4996)

int inputMenu(const char*);
int inputUse(const char*);
double cal_tex(int, int);
void printResult(const char*,int,double);
void myflush();


int main()
{
	int m; // �޴�
	int use, tex;
	double total_tex; // ��뷮, ton�� ���, �� ���

	m = inputMenu("* ����� �ڵ带 �Է��Ͻÿ�(1:������/2:�����/3:������) : ");
	use = inputUse("* ��뷮�� �Է��Ͻÿ�(ton����) : ");
	switch (m) {
	case 1:
		tex = 50;
		total_tex = cal_tex(use, tex);
		printResult("1(������)", use, total_tex);
		break;
	case 2:
		tex = 45;
		total_tex = cal_tex(use, tex);
		printResult("2(�����)", use, total_tex);
		break;
	case 3:
		tex = 30;
		total_tex = cal_tex(use, tex);
		printResult("3(������)", use, total_tex);
		break;
	default:;
	}
}

int inputMenu(const char* msg)
{
	int res;
	printf("%s",msg);
	scanf("%d", &res);
	while (1) {
		if ((res >= 1) && (res <= 3)) { break; }
		myflush();
		printf("* �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
		printf("%s", msg);
		scanf("%d", &res);
	}
	return res;
}
int inputUse(const char* msg)
{
	int use;
	printf("%s", msg);
	scanf("%d", &use);
	while (1) {
		if (use >= 0) { break; }
		myflush();
		printf("* �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
		printf("%s", msg);
		scanf("%d", &use);
	}
	return use;
}
double cal_tex(int use, int tex)
{
	double res;
	res = use * tex * 1.05;
	return res;
}
void printResult(const char* sort, int use, double total_tex)
{
	printf("\n# ������ڵ� : %s\n", sort);
	printf("# ��뷮 : %d ton\n", use);
	printf("# �Ѽ������ : %0.0lf\n", total_tex);
}
void myflush()
{
	while (getchar() != '\n') { ; }
}