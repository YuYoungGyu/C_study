#include<stdio.h>
#include<string.h>
#pragma warning (disable : 4996)

void input(const char*, char*);
void change(char*, int); // ī���� ���ڿ��� �޾� ��� ���ĺ��� �ҹ��ڷ� �����.
int result(char*, int);


int main()
{
	int len;
	char str[100], str_c[100];
	while (1) {
		input("# �ܾ� �Է� : ", str);
		strcpy(str_c, str);
		if (strcmp(str_c, "end") == 0) { break; }
		len = strlen(str);
		change(str_c, len);
		printf("\"%s\" : ", str);
		result(str_c,len) ? printf("ȸ���Դϴ�!\n\n") : printf("ȸ���� �ƴմϴ�!\n\n");
	}
	return 0;
}
void input(const char* msg, char* str)
{
	printf("%s",msg);
	scanf("%s", str);
	while (getchar() != '\n') {
		while (getchar() != '\n') { ; }
		printf("%s", msg);
		scanf("%s", str);
	}
}
int result(char* str, int len)
{
	int res = 1, i;
	for (i = 0; i < len / 2; i++) {
		if (str[i] != str[len - 1 - i]) { res = 0; break; }
	}
	return res;
}
void change(char* str, int len)
{
	int i;
	for (i = 0; i < len; i++) {
		if ((str[i] >= 65) && (str[i] <= 90 )) { str[i] += 32; }
	}
}
