#include<stdio.h>
#pragma warning (disable : 4996)

int input(const char*);

int main()
{
	int num; // num, num/5�� ��, num/5�� ������
	num = input("# �������� �Է��ϼ��� : ");
	char str[6] = "*****"; // ��� ��

	for (num; num > 5; num -= 5) {
		printf("%s\n", str);
	}
	printf("%.*s\n", num,str);
	return 0;
}

int input(const char* msg)
{
	int input;
	printf("%s", msg);
	scanf("%d", &input);
	return input;
}