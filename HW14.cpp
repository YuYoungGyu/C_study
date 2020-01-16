#include<stdio.h>
#include<string.h>
#pragma warning (disable : 4996)

int main() 
{
	char str[20]; //입력받을str
	printf("* 문자열 입력 : ");
	scanf("%s", str);

	int len = strlen(str);

	for (int i = len/2; i < len ; i++) {
		str[i] = NULL;
	} // 필요없는 부분의 가장 앞 자리를 NULL로 바꾼다.
	
	printf("[%*s...]\n",len,str);

	return 0;
}