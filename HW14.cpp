#include<stdio.h>
#include<string.h>
#pragma warning (disable : 4996)

int main() 
{
	char str[20]; //�Է¹���str
	printf("* ���ڿ� �Է� : ");
	scanf("%s", str);

	int len = strlen(str);

	for (int i = len/2; i < len ; i++) {
		str[i] = NULL;
	} // �ʿ���� �κ��� ���� �� �ڸ��� NULL�� �ٲ۴�.
	
	printf("[%*s...]\n",len,str);

	return 0;
}