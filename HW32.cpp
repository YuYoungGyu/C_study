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
	num = inputUInt("* 양의 정수 밑을 입력하시오 : ");
	n = inputUInt("* 양의 승을 입력하시오 : ");
	printf("%d의 %d승은 %d입니다.\n\n",num,n,ipow(num, n));
	fnum = inputDouble("* 양의 실수 밑을 입력하시오 : ");
	n = inputUInt("* 양의 승을 입력하시오 : ");
	printf("%.2lf의 %d승은 %.3lf입니다.\n", fnum, n, fpow(fnum, n));
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
			printf("* 잘못 입력하셨습니다. 다시 입력하십시오 : ");
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
			printf("* 잘못 입력하셨습니다. 다시 입력하십시오 : ");
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