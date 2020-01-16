#include<stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int num1, num2;

	printf("µÎ°³ÀÇ Á¤¼ö¸¦ ÀÔ·ÂÇÏ½Ã¿À : ");
	scanf("%d %d", &num1, &num2);

	printf("%d+%d = %d\n", num1, num2, num1+num2); // µ¡¼À
	printf("%d-%d = %d\n", num1, num2, num1 - num2); // »¬¼À
	printf("%d*%d = %d\n", num1, num2, num1 * num2); // °ö¼À
	printf("%d/%d = %.2lf\n", num1, num2, (double)num1 / num2); // ³ª´°¼À

	return 0;
}