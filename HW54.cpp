#include<stdio.h>
#include<string.h>
#pragma warning (disable : 4996)

void inputString(const char*, char*);
int cal_number(char*);
int numPlace(int place); // 10�� ������ ���ϴ� �Լ�(�ڸ���)

int main()
{
	char str[100];
	int result;
	while (1) {
		inputString("# ������ �Է��Ͻÿ� : ", str);
		if (strcmp(str,"end") == 0) { break; }
		result = cal_number(str);
		printf("\"%s\" ���� �� ���ڴ� [%d]�Դϴ�.\n\n",str,result);
	}
	return 0;
}
void inputString(const char* msg, char* str)
{
	printf("%s", msg);
	scanf("%s",str);
}
int cal_number(char* str)
{
	int number[10] = {0,}, res = 0, i = -1;
	int len = strlen(str);
	while(i != len){
		int numberlen = 0;
		i++;
		while ((str[i] >= 48) && (str[i] <= 57)) {
			number[numberlen] = str[i] - '0';
			numberlen++;
			i++;
		}
		for (int j = numberlen-1; j >= 0; j--) {
			res += number[numberlen-1-j]* numPlace(j);
		}
	}
	return res;
}
int numPlace(int place) {
	int i, res = 1;
	for (i = 0; i < place; i++) {
		res *= 10;
	}
	return res;
}