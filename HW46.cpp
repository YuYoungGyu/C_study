#include<stdio.h>
#pragma warning (disable : 4996)

int input(const char*,int*, int*, int*); // 날짜 입력
int errorCheck(int, int, int); // 입력한 날짜가 올바른지 확인하여 결과 리턴
int yearCheck(int); // 윤년인지 확인 후, 일 수(365,366)을 리턴함
int monthCheck(int , int); // 년과 월을 고려하여 일 수(28,29,30,31)를 리턴함
int cal_totalDays(int, int, int); // 총 일수를 계산
void printResult(int); // 요일 출력

int main()
{
	int year, month, day, totalDays;
	int run;
	while (1) {
		run = input("* 년 월 일을 입력하시오 : ", &year, &month, &day);
		if (run == 0) { break; }
		totalDays = cal_totalDays(year, month, day);
		printf("%d년 %d월 %d일은 ", year, month, day);
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
			else { printf("올바른 날짜를 입력하시오.\n\n"); }
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
			if (year % 400 == 0) {result = 366; } // 윤년
			else {result = 365; } // 평년
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
	case 0: printf("일요일입니다.\n\n"); break;
	case 1: printf("월요일입니다.\n\n"); break;
	case 2: printf("화요일입니다.\n\n"); break;
	case 3: printf("수요일입니다.\n\n"); break;
	case 4: printf("목요일입니다.\n\n"); break;
	case 5: printf("금요일입니다.\n\n"); break;
	case 6: printf("토요일입니다.\n\n"); break;
	default:;
	}
}