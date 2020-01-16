#include <stdio.h>
// 함수 선언부
int printAge(int age);
int printHeight(double height);

int main()
{
	char name[20] = "유영규";
	int age = 500;
	double height = 170.8;

	printf("성명 : %s\n", name);
	printAge(age);
	printHeight(height);

	return 0;
}
// 함수 정의부
int printAge(int age)
{
	printf("나이 : %d살\n",age);
	return 0;
}

int printHeight(double height)
{
	printf("신장 : %lfcm\n",height);
	return 0;
}