#include<stdio.h>
#include<string.h>
#pragma warning (disable : 4996)

void inputChar(char (*)[20],int);
void sort(char(*)[20], int);
void printfResult(char(*)[20], int);

int main() 
{
	char str[5][20];
	int row = sizeof(str) / sizeof(str[20]);
	inputChar(str, row);
	sort(str, row);
	printfResult(str, row);
	return 0;
}
void inputChar(char(*str)[20], int row)
{
	int i;
	for (i = 0; i < row; i++) {
		printf("# %d번 문자열을 입력하시오 : ",i+1);
		scanf("%s",str[i]);
	}
	printf("\n");
}
void sort(char(*str)[20], int row)
{
	int i,j,n;
	char temp[20];
	for (i = 0; i < row; i++) {
		for (j = i; j < row; j++) {
			n = strcmp(str[i], str[j]);
			if (n > 0) {
				strcpy(temp, str[i]);
				strcpy(str[i], str[j]);
				strcpy(str[j], temp);
			}
		}
	}
}
void printfResult(char(*str)[20], int row)
{
	int i,len;
	for (i = 0; i < row; i++) {
		len = strlen(str[i]);
		printf("str[%d] = %s  %c  %c\n",i,str[i], str[i][0],str[i][len-1]);
	}
}