#include<stdio.h>
#pragma warning (disable : 4996)

void printResult(double,double);

int main() 
{
	double dis, val; // 거리 시속 

	int i = 0;
	while (i < 3) {
		printf("* 거리를 입력하시오(km단위) : ");
		scanf("%lf",&dis); // 거리입력
		printf("* 시속을 입력하시오(km/h단위) : ");
		scanf("%lf",&val); // 시속 입력
		printResult(dis,val); // 시간을 구해서 출력
		printf("\n");
		i++;
	}
}

void printResult(double d, double v) 
{
	double time, s; // 걸린 시간, 초
	int h, m; // 시, 분

	time = d / v;

	h = (int)time;
	time = (time - h)*60; // 분 단위로 변환
	m = (int)time;
	time = (time - m) * 60;
	s = time;

	printf("%.2lf = >%d시간 %d분 %.3lf 초 소요됨\n", d, h, m, s);
}