#include<stdio.h>
#include<string.h>
#pragma warning (disable : 4996)

int main() 
{
	char first[10], last[10]; // 성 이름
	int firstLen, lastLen;

	printf("#성을 입력하시오 : ");
	scanf("%s",first);
	printf("#이름을 입력하시오 : ");
	scanf("%s",last);

	firstLen = strlen(first); // 성 길이
	lastLen = strlen(last); // 이름 길이

	printf("%s %s\n", first, last); // 성,이름출력
	printf("%*d %*d\n", firstLen, firstLen, lastLen, lastLen); // 길이출력

	return 0;
}