#include<stdio.h>

int main()
{
	int i, j, k;

	printf("<2중 for문을 이용한 출력>\n");
	for (i = 1; i <= 9; i++) {
		for (j = 2; j <= 5; j++) {
			printf("%d*%d= %d\t\t", j, i, i * j);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 1; i <= 9; i++) {
		for (j = 6; j <= 9; j++) {
			printf("%d*%d= %d\t\t", j, i, i * j);
		}
		printf("\n");
	}
	printf("---------------------------------------------------------\n");
	printf("\n<3중 for문을 이용한 출력>\n");
	for (i = 0; i < 2; i++) {
		for (j = 1; j <= 9; j++) {
			for (k = 2; k <= 5; k++) {
				printf("%d*%d= %d\t\t", k+i*4, j, j * (k + i * 4));
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}