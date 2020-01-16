#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
    char ch[20];
    int len;

    printf("* 문자열 입력: ");
    scanf("%s", ch);

    len = strlen(ch);

    printf("[%*.*s…]\n", len, len / 2, ch);

    return 0;
}