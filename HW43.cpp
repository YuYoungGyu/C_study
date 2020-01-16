#include<stdio.h>
#pragma warning (disable : 4996)

int input(const char*);
int primeNumber(int);
void myflush();

int main() 
{
	int number, prime, many = 0, many_c;
	number = input("* ������ �ϳ��� �Է��Ͻÿ� : ");
	printf("1~%d������ �Ҽ� ���� ������ �����ϴ�.\n", number);
	for (int i = 2; i <= number; i++) {
		prime = primeNumber(i);
		many_c = many;
		if (prime == 1) { 
			printf("%-4d", i); 
			many++;
		}
		if (many_c < many) {
			if (many % 5 == 0) { printf("\n"); }
		}
	}
	printf("\n1~%d������ �� �Ҽ��� %d�� �Դϴ�.\n", number,many);
	return 0;
}
int input(const char* msg)
{
	int input;
	printf("%s", msg);
	scanf("%d", &input);
	while (getchar() != '\n') {
		myflush();
		printf("%s", msg);
		scanf("%d", &input);
	}
	return input;
}
int primeNumber(int number)
{
	int yaksu = 1, res = 1;
	for (int i = 2; i <= number; i++) {
		if (number % i == 0) { yaksu++; }
		if (yaksu > 2) { res = 0; break; }
	}
	return res;
}
void myflush()
{
	while (getchar() != '\n') { ; }
}