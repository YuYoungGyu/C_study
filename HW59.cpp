#include<stdio.h>
#pragma warning (disable : 4996)

int inputMany(const char*);
void inputNumber(const char*,int*,int);
int getResult(int*, int);

int main() 
{
	int many = 1, res;
	int array[10000] = { 0, };
	while (1) {
		many = inputMany("* 입력할 숫자의 개수 : ");
		if (many == 0) { break; }
		inputNumber("* 숫자 입력 : ", array, many);
		res = getResult(array, many);
		printf("%d\n\n", res);
	}
	return 0;
}
int inputMany(const char* msg)
{
	int input = 0;
	printf("%s", msg);
	scanf("%d", &input);
	return input;
}
void inputNumber(const char* msg, int* array, int many)
{
	int i;
	printf("%s",msg);
	for (i = 0; i < many; i++) {
		scanf("%d",&array[i]);
	}
}
int getResult(int* array, int many) 
{
	int i,j,res=0;
	for (i = 0; i < many; i++) {
		if (array[i] != 0) {
			res++;
			for (j = i+1; j < many; j++) {
				if (array[i] == array[j]) { array[j] = 0; }
			}
			array[i] = 0;
		}
	}
	return res;
}