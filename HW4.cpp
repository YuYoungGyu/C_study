#include <stdio.h>

int main()
{
	
	int h, m;
	double s;

	double year = 365.2422;
	int year_days = (int)year;
	double year_time = year - year_days;
	// 1 = 1day, 1 = 24h, 1h = 60m, 1m = 60s �������� ���Ѵ�.
	year_time *= 24; // �� ������ ǥ���� year_time�� �ð� ������ ��������� 24�� ���Ѵ�. 
	h = (int)year_time; // year_time�� �����δ� h�̴�.
	year_time -= h; // year_time�� ����

	year_time *= 60; // �ð� ������ ǥ���� year_time�� �� ������ ��������� 60�� ���Ѵ�.
	m = (int)year_time; // year_time�� �����δ� m�̴�.
	year_time -= m; // year_time�� ����

	year_time *= 60; // �� ������ ǥ���� year_time�� �� ������ ��������� 60�� ���Ѵ�.
	s = year_time; // year_time�� �״�� s�� �����Ѵ�.

	printf("%lf���� %d�� %d�ð� %d�� %0.2lf���Դϴ�.\n",year,year_days,h,m,s); //  %0.2lf�� ����Ͽ� �Ҽ��� ��°�ڸ����� ����Ѵ�.

	return 0;
}