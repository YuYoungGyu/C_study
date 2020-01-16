#include<stdio.h>
#pragma warning (disable : 4996)

int input(const char*, int*);
char choice(int,int);
void printResult(int, int, int);

int main() 
{
	int min = -1, max;
	char option;
	min = input("# ���� ���� �Է��Ͻÿ� : ", &min);
	max = input("# �� ���� �Է��Ͻÿ� : ", &min);

	option = choice(min,max);

	if (option == 'e') { printResult(min, max, 0); }
	else { printResult(min, max, 1); }

	return 0;
}
int input(const char* msg, int* min)
{
	int input;
	while (1) {
		printf("%s", msg);
		scanf("%d", &input);
		while (getchar() != '\n') { ; }
		if (input > * min) { break; }
	}
	return input;
}
char choice(int min, int max)
{
	char option;
	while (1) {
		printf("%d~%d������ ¦���� ���� ���ұ��? Ȧ���� ���� ���ұ��?(¦��:e/Ȧ��:o) : ", min, max);
		scanf("%c", &option);
		if ((option == 101) || (option == 111)) { printf("1%c",option); break; }
		printf("2%c", option);
		while (getchar() != '\n') { ; }
	}
	return option;
}
void printResult(int min,int max,int option)
{
	int total = 0;
	if (option == 0) {
		printf("%d~%d ������ ¦��(",min,max);
		if (min % 2 == 1) { min++; }
		for (min; min <= max; min += 2) { 
			printf("%d ",min);
			total += min; }
	}
	else {
		printf("%d~%d ������ Ȧ��(", min, max);
		if (min % 2 == 0) { min++; }
		for (min; min <= max; min += 2) {
			printf("%d ", min);
			total += min;
		}
	}
	printf(")�� ���� %d �Դϴ�.\n", total);
}