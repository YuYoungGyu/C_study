#include<stdio.h>

int main()
{
	int time = 54321;
	int c_time = time; //계산을 위해 time과 값이 같은 c_time 변수를 선언한다.
	int h, m, s;

	h = c_time / 3600;
	c_time -= 3600 * h;
	m = c_time / 60;
	c_time -= 60 * m;
	s = c_time;

	printf("%d초는 %d시간 %d분 %d초 입니다.", time,h,m,s);
}