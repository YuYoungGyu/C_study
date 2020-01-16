#include<stdio.h>
#pragma warning (disable : 4996)

int input(const char* );
int cal_Day(int);
void printResult( int, int);

int main() 
{
	int h;
	int day;
	h = input("* 우물의 깊이를 입력하시오(cm단위) : ");
	day = cal_Day(h);
	printResult( h, day);
	return 0;
}

int input(const char* msg)
{
	int input;
	printf("%s", msg);
	scanf("%d", &input);
	return input;
}
int cal_Day(int h)
{
	int day = 0;
	int least; // 30을 나눈 나머지
	if (h == 0) {
		day = 0;
	}
	else  {
		day = h / 30;
		least = h % 30;
		if (least > 20) { // 나머지가 20보다 크면 하루가 더 걸린다.
			day += 1;
		}
	}
	return day;
}
void printResult(int h, int day)
{
	double mh;
	mh = (double)h / 100;
	printf("%.2lf미터 깊이의 우물을 탈출하기 위해서는 %d일이 걸립니다.\n", mh, day);
}