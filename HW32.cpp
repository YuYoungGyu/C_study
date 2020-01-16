#include<stdio.h>
#pragma warning (disable : 4996)

int inputUInt(const char*);
double inputDouble(const char*);
int ipow(int, int);
double fpow(double, int);

int main() 
{
	int num, n;
	double fnum;
	num = inputUInt("* ���� ���� ���� �Է��Ͻÿ� : ");
	n = inputUInt("* ���� ���� �Է��Ͻÿ� : ");
	printf("%d�� %d���� %d�Դϴ�.\n\n",num,n,ipow(num, n));
	fnum = inputDouble("* ���� �Ǽ� ���� �Է��Ͻÿ� : ");
	n = inputUInt("* ���� ���� �Է��Ͻÿ� : ");
	printf("%.2lf�� %d���� %.3lf�Դϴ�.\n", fnum, n, fpow(fnum, n));
	return 0;
}
int inputUInt(const char* msg)
{
	int input;
	printf("%s", msg);
	scanf("%d", &input);
	while (1) {
		while (getchar() != '\n') {
			while (getchar() != '\n') { ; }
			printf("* �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� : ");
			scanf("%d", &input);
		}
		if (input > 0) { break; }
	}
	return input;
}
double inputDouble(const char* msg)
{
	double input;
	printf("%s", msg);
	scanf("%lf", &input);
	while (1) {
		while (getchar() != '\n') {
			while (getchar() != '\n') { ; }
			printf("* �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� : ");
			scanf("%lf", &input);
		}
		if (input > 0) { break; }
	}
	return input;
}
int ipow(int num, int n)
{
	int res = 1;
	for (int i = 0; i < n; i++) {
		res *= num;
	}
	return res;
}
double fpow(double fnum, int n)
{
	double res = 1;
	for (int i = 0; i < n; i++) {
		res *= fnum;
	}
	return res;
}