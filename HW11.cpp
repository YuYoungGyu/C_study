#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
    char ch[20];
    int len;

    printf("* ���ڿ� �Է�: ");
    scanf("%s", ch);

    len = strlen(ch);

    printf("[%*.*s��]\n", len, len / 2, ch);

    return 0;
}