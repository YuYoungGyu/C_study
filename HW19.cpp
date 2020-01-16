#include<stdio.h>
#pragma warning (disable : 4996)

int input(const char*);
int yearCheck(int);

int main() 
{
	int year;
	year = input("�⵵�� �Է��Ͻÿ� : ");

	if (yearCheck(year) == 0) {
		printf("%d���� �� ��(Common year)�Դϴ�.\n", year);
	}
	else{
		printf("%d���� �� ��(Leap year)�Դϴ�.\n", year);
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
	if (year % 4 == 0) { // %�� �������� ���Ѵ�.
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