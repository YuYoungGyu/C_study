#include<stdio.h>

int main()
{
	int time = 54321;
	int c_time = time; //����� ���� time�� ���� ���� c_time ������ �����Ѵ�.
	int h, m, s;

	h = c_time / 3600;
	c_time -= 3600 * h;
	m = c_time / 60;
	c_time -= 60 * m;
	s = c_time;

	printf("%d�ʴ� %d�ð� %d�� %d�� �Դϴ�.", time,h,m,s);
}