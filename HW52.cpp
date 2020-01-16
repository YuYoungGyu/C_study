#include<stdio.h>
#pragma warning (disable : 4996)

int inputTest(const char*);
int inputData(const char* msg, int*);
void sort(int*, int);
void printArray(const char*, int*,int);

int main() 
{
	int i, test, ary[100] = {0,};
	test = inputTest("�� �׽�Ʈ �Ǽ� : ");
	for (i = 0; i < test; i++) {
		int len = inputData("������ �Է� : ",ary);
		printArray("# ��Ʈ �� ������ : ",ary,len);
		sort(ary, len);
		printArray("# ��Ʈ �� ������ : ",ary, len);
		printf("\n");
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
		printf("���� ������ �Է��ϼ���.\n\n");
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
void sort(int* ary, int len)
{
	int i, j, temp;
	for (i = 0; i < len; i++) {
		for (j = i; j < len; j++) {
			if (ary[i] > ary[j]) {
				temp = ary[i];
				ary[i] = ary[j];
				ary[j] = temp;
			}
		}
	}
}
void printArray(const char* msg, int* ary, int len)
{
	int i;
	printf("%s",msg);
	for (i = 0; i < len; i++) {
		printf("%3d",ary[i]);
	}
	printf("\n");
}