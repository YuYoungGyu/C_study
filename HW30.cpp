#include<stdio.h>
#pragma warning (disable : 4996)

int input(const char*);
void transfer(int);

int main() 
{
	int num_10;
	num_10 = input("* 10진수 정수를 입력하시오 : ");
	printf("%d(10) = ", num_10);
	transfer(num_10);
	return 0;
}

int input(const char* msg)
{
	int input;
	printf("%s", msg);
	scanf("%d", &input);
	while (getchar() != '\n') {
		printf("잘못된 입력입니다.\n");
		while (getchar() != '\n') { ; }
		printf("%s", msg);
		scanf("%d", &input);
	}
	return input;
}
void transfer(int num_10)
{
	int num_2;
	int k;
	int i = 31;
	for (i; i>=0; i--) {
		k=1;
		k <<= i;
		if (num_10 & k) {
			num_2 = 1;
		}
		else {
			num_2 = 0;
		}
		printf("%d", num_2);
	}
	printf("(2)\n");
}