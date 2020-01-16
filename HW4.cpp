#include <stdio.h>

int main()
{
	
	int h, m;
	double s;

	double year = 365.2422;
	int year_days = (int)year;
	double year_time = year - year_days;
	// 1 = 1day, 1 = 24h, 1h = 60m, 1m = 60s 임을통해 구한다.
	year_time *= 24; // 일 단위로 표현된 year_time를 시간 단위로 만들기위해 24를 곱한다. 
	h = (int)year_time; // year_time의 정수부는 h이다.
	year_time -= h; // year_time값 수정

	year_time *= 60; // 시간 단위로 표현된 year_time를 분 단위로 만들기위해 60을 곱한다.
	m = (int)year_time; // year_time의 정수부는 m이다.
	year_time -= m; // year_time값 수정

	year_time *= 60; // 분 단위로 표현된 year_time를 초 단위로 만들기위해 60을 곱한다.
	s = year_time; // year_time을 그대로 s에 저장한다.

	printf("%lf일은 %d일 %d시간 %d분 %0.2lf초입니다.\n",year,year_days,h,m,s); //  %0.2lf를 사용하여 소수점 둘째자리까지 출력한다.

	return 0;
}