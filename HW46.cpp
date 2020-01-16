#include<stdio.h>
#pragma warning (disable : 4996)

int input(const char*,int*, int*, int*); // ��¥ �Է�
int errorCheck(int, int, int); // �Է��� ��¥�� �ùٸ��� Ȯ���Ͽ� ��� ����
int yearCheck(int); // �������� Ȯ�� ��, �� ��(365,366)�� ������
int monthCheck(int , int); // ��� ���� ����Ͽ� �� ��(28,29,30,31)�� ������
int cal_totalDays(int, int, int); // �� �ϼ��� ���
void printResult(int); // ���� ���

int main()
{
	int year, month, day, totalDays;
	int run;
	while (1) {
		run = input("* �� �� ���� �Է��Ͻÿ� : ", &year, &month, &day);
		if (run == 0) { break; }
		totalDays = cal_totalDays(year, month, day);
		printf("%d�� %d�� %d���� ", year, month, day);
		printResult(totalDays);
	}
	return 0;
}
int input(const char* msg, int* year, int* month, int* day)
{
	int res = 1, check;
	while (1) {
		printf("%s", msg);
		scanf("%d %d %d", year, month, day);
		check = errorCheck(*year, *month, *day);
		if (getchar() != '\n') { res = 0; break; }
		else {
			if (check == 1) { break; }
			else { printf("�ùٸ� ��¥�� �Է��Ͻÿ�.\n\n"); }
		}
	}
	return res;
}
int errorCheck(int year, int month, int day)
{
	int res = 0;
	if ((year >= 1900) && ((month >= 1) && (month <= 12)) && (day >= 1)) {
		res = monthCheck(year,month);
		if (day <= res) { res = 1; }
	}
	return res;
}
int yearCheck(int year)
{
	int result;
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {result = 366; } // ����
			else {result = 365; } // ���
		}
		else { result = 366; }
	}
	else { result = 365; }
	return result;
}
int monthCheck(int year, int month)
{
	int res;
	if (month <= 7) {
		if (month % 2 == 1) { res = 31; }
		else if (month == 2) {
			if (yearCheck(year) == 366) { res = 29; }
			else { res = 28; }
		}
		else { res = 30; }
	}
	else {
		if (month % 2 == 0) { res = 31; }
		else { res = 30; }
	}
	return res;
}
int cal_totalDays(int year, int month, int day)
{
	int totalDays = 0;
	for (int i = 1900; i < year; i++) { totalDays += yearCheck(i); }
	for (int j = 1; j < month; j++) { totalDays += monthCheck(year, j); }
	totalDays += day;
	return totalDays;
}
void printResult(int totalDays)
{
	switch (totalDays % 7) {
	case 0: printf("�Ͽ����Դϴ�.\n\n"); break;
	case 1: printf("�������Դϴ�.\n\n"); break;
	case 2: printf("ȭ�����Դϴ�.\n\n"); break;
	case 3: printf("�������Դϴ�.\n\n"); break;
	case 4: printf("������Դϴ�.\n\n"); break;
	case 5: printf("�ݿ����Դϴ�.\n\n"); break;
	case 6: printf("������Դϴ�.\n\n"); break;
	default:;
	}
}