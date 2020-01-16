#include <stdio.h>
#pragma warning(disable : 4996)

int main() 
{
	char str[20];
	printf("이름을 입력하시오 : ");
	scanf("%s",str);

	printf("\"%20s\"\n", str);
	printf("\"%-20s\"\n", str);
	return 0;
}