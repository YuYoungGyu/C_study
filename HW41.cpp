#include<stdio.h>
#pragma warning (disable : 4996)

int main()
{
	char input_c; // 65~90
	char i, j;

	while (1) {
		printf("* 영문자 대문자 입력(\'A\'~\'Z\') : ");
		scanf("%c",&input_c);
		if ((input_c < 65) || (input_c > 90)) { break; }

		for (i = input_c; i >= 'A'; i--) {
			for (j = input_c; j >= i; j--) {
				printf("%c",j);
			}
			printf("\n");
		}
		printf("\n");
		while (getchar() != '\n') { ; }
	}
	return 0;
}