#include<stdio.h>
#include<string.h>
#pragma warning (disable : 4996)

void input(const char*, char*);
void change(char*, int); // 카피한 문자열을 받아 모든 알파벳을 소문자로 만든다.
int result(char*, int);


int main()
{
	int len;
	char str[100], str_c[100];
	while (1) {
		input("# 단어 입력 : ", str);
		strcpy(str_c, str);
		if (strcmp(str_c, "end") == 0) { break; }
		len = strlen(str);
		change(str_c, len);
		printf("\"%s\" : ", str);
		result(str_c,len) ? printf("회문입니다!\n\n") : printf("회문이 아닙니다!\n\n");
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
