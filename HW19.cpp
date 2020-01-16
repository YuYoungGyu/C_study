#include<stdio.h>
#pragma warning (disable : 4996)

int input(const char*);
int yearCheck(int);

int main() 
{
	int year;
	year = input("년도를 입력하시오 : ");

	if (yearCheck(year) == 0) {
		printf("%d년은 평 년(Common year)입니다.\n", year);
	}
	else{
		printf("%d년은 윤 년(Leap year)입니다.\n", year);
	}

	return 0;
}
int input(const char* msg)
{
	int input;
	printf("%s", msg);
	scanf("%d",&input);
	return input;
}
int yearCheck(int year)
{
	int result;
	if (year % 4 == 0) { // %는 나머지를 구한다.
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				result = 1;
			}
			else {
				result = 0;
			}
		}
		else {
			result = 1;
		}
	}
	else {
		result = 0;
	}
	return result;
}