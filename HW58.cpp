#include<stdio.h>
#pragma warning (disable : 4996)

int inputTest(const char*);
int inputData(const char*, int*);
int findMax(int*, int);
void histogram(int*, int, int);

int main()
{
	int i, test, ary[100] = { 0, }, max;
	test = inputTest("총 테스트 건수 : ");
	for (i = 0; i < test; i++) {
		int len = inputData("데이터 입력 : ", ary);
		max = findMax(ary, len);
		histogram(ary, len, max);
		printf("\n----------------------------------------\n\n");
	}
	return 0;
}
int inputTest(const char* msg)
{
	int input;
	printf("%s", msg);
	scanf("%d", &input);
	while (1) {
		if (getchar() == '\n') { if (input > 0) { break; } }
		else { while (getchar() != '\n') { ; } }
		printf("양의 정수를 입력하세요.\n\n");
		printf("%s", msg);
		scanf("%d", &input);
	}
	return input;
}
int inputData(const char* msg, int* ary)
{
	int i = 0;
	printf("%s", msg);
	while (1) {
		scanf("%d", &ary[i]);
		if (ary[i] == 0) { break; }
		i++;
	}
	return i;
}
int findMax(int* ary, int len)
{
	int max = ary[0], i;
	for (i = 1; i < len; i++) {
		if (max < ary[i]) { max = ary[i]; }
	}
	return max;
}
void histogram(int* ary, int len, int max)
{
	int i,j;
	printf("\n\n");
	for (i = max; i > 0; i--) {
		for (j = 0; j < len; j++) {
			if (ary[j] >= i) { printf("%2c",'*'); }
			else(printf("%2c",' '));
		}
		printf("\n");
	}
	for (i = 0; i < len; i++) {
		printf("%2d",ary[i]);
	}
}