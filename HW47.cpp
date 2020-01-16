#include<stdio.h>
#pragma warning (disable : 4996)

double inputNumer(int);
double findMin(double*);
double findMax(double*);
void printfResult(double, double);

int main() 
{
	double ary[5];
	int size;
	double min, max;

	size = sizeof(ary) / sizeof(double);
	for (int i = 0; i < size; i++) {
		ary[i] = inputNumer(i);
	}

	min = findMin(ary);
	max = findMax(ary);

	printfResult( min, max);

	return 0;
}
double inputNumer(int i)
{
	double input;
	printf("%d �� �� �� : ",i);
	scanf("%lf",&input);
	while (getchar() != '\n') {
		while (getchar() != '\n') { ; }
		printf("%d �� �� �� : ", i);
		scanf("%lf", &input);
	}
	return input;
}
double findMin(double* ary)
{
	double res = ary[0];
	for (int i = 1; i < 5; i++) {
		if (res > ary[i]) { res = ary[i]; }
	}
	return res;
}
double findMax(double* ary)
{
	double res = ary[0];
	for (int i = 1; i < 5; i++) {
		if (res < ary[i]) { res = ary[i]; }
	}
	return res;
}
void printfResult(double min, double max)
{
	printf("\n���� ū �� : %.2lf\n",max);
	printf("���� ���� �� : %.2lf\n", min);
}