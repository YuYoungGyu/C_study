#include <stdio.h>
// �Լ� �����
int printAge(int age);
int printHeight(double height);

int main()
{
	char name[20] = "������";
	int age = 500;
	double height = 170.8;

	printf("���� : %s\n", name);
	printAge(age);
	printHeight(height);

	return 0;
}
// �Լ� ���Ǻ�
int printAge(int age)
{
	printf("���� : %d��\n",age);
	return 0;
}

int printHeight(double height)
{
	printf("���� : %lfcm\n",height);
	return 0;
}