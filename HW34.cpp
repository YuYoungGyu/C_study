#include<stdio.h>
#pragma warning (disable : 4996)

int inputMenu(const char*);
int inputUse(const char*);
double cal_tex(int, int);
void printResult(const char*,int,double);
void myflush();


int main()
{
	int m; // 메뉴
	int use, tex;
	double total_tex; // 사용량, ton당 요금, 총 요금

	m = inputMenu("* 사용자 코드를 입력하시오(1:가정용/2:상업용/3:공업용) : ");
	use = inputUse("* 사용량을 입력하시오(ton단위) : ");
	switch (m) {
	case 1:
		tex = 50;
		total_tex = cal_tex(use, tex);
		printResult("1(가정용)", use, total_tex);
		break;
	case 2:
		tex = 45;
		total_tex = cal_tex(use, tex);
		printResult("2(상업용)", use, total_tex);
		break;
	case 3:
		tex = 30;
		total_tex = cal_tex(use, tex);
		printResult("3(공업용)", use, total_tex);
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
		printf("* 잘못 입력하셨습니다. 다시 입력하세요.\n");
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
		printf("* 잘못 입력하셨습니다. 다시 입력하세요.\n");
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
	printf("\n# 사용자코드 : %s\n", sort);
	printf("# 사용량 : %d ton\n", use);
	printf("# 총수도요금 : %0.0lf\n", total_tex);
}
void myflush()
{
	while (getchar() != '\n') { ; }
}