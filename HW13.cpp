#include<stdio.h>
#include<string.h>
#pragma warning (disable : 4996)

int main() 
{
	char first[10], last[10]; // �� �̸�
	int firstLen, lastLen;

	printf("#���� �Է��Ͻÿ� : ");
	scanf("%s",first);
	printf("#�̸��� �Է��Ͻÿ� : ");
	scanf("%s",last);

	firstLen = strlen(first); // �� ����
	lastLen = strlen(last); // �̸� ����

	printf("%s %s\n", first, last); // ��,�̸����
	printf("%*d %*d\n", firstLen, firstLen, lastLen, lastLen); // �������

	return 0;
}