#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning (disable : 4996)

int input(const char*);
int*** myAlloc(int, int, int);
void dataInput(int***, int, int, int); // 1~10������ ������ ���� �Է�
void dataOutput(int***, int, int, int);
void myDelete(int***, int, int);

int main() 
{
	int sheet, row, col;
	int*** ptr;
	srand(time(NULL));
	sheet = input("���� �� : ");
	row = input("���� �� : ");
	col = input("���� �� : ");
	ptr = myAlloc(sheet, row, col);
	dataInput(ptr, sheet, row, col);
	dataOutput(ptr, sheet, row, col);
	myDelete(ptr,sheet,row);

	return 0;
}
int input(const char* msg)
{
	int input;
	while (1) {
		printf("%s", msg);
		scanf("%d", &input);
		while (getchar() != '\n') { ; }
		if (input > 0) { break; }
		printf("���� ������ �Է��Ͻÿ�.\n");
	}
	return input;
}
int*** myAlloc(int sheet, int row, int col)
{
	int*** p;
	int i, j;
	p = (int***)malloc(sizeof(int**) * sheet);
	if (p == NULL) { return NULL; }
	for (i = 0; i < sheet; i++) {
		*(p+i) = (int**)malloc(sizeof(int*) * row);
		if (*(p + i) == NULL) { return NULL; }
		for (j = 0; j < row; j++) {
			*(*(p + i) + j) = (int*)malloc(sizeof(int) * col);
			if (*(*(p + i) + j) == NULL) { return NULL; }
		}
	}
	return p;
}
void dataInput(int*** p, int sheet, int row, int col)
{
	int i, j, k;
	for (i = 0; i < sheet;i++) {
		for (j = 0; j < row; j++) {
			for (k = 0; k < col; k++) {
				p[i][j][k] = rand() % 10 + 1;
			}
		}
	}
}
void dataOutput(int*** p, int sheet, int row, int col)
{
	int i, j, k;
	for (i = 0; i < sheet; i++) {
		printf("\n%d�� ��", i);
		for (k = 0; k < col; k++) {
			printf("\t%d�� ��",k);
		}
		for (j = 0; j < row; j++) {
			printf("\n%d�� ��\t", j);
			for (k = 0; k < col; k++) {
				printf("%d\t",p[i][j][k]);
			}
		}
		printf("\n");
	}
}
void myDelete(int*** p, int sheet, int row)
{
	int i, j;
	if (p != NULL) {
		for (i = 0; i < sheet; i++) {
			for (j = 0; j < row; j++) {
				if (p[i][j] != NULL) { free(p[i][j]); }
			}
			if (p[i] != NULL) { free(p[i]); }
		}
		if (p != NULL) { free(p); }
	}

}