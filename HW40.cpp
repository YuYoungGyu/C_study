#include<stdio.h>
#pragma warning (disable : 4996)

int main() 
{
	int line;
	int i, j;

	printf("# 출력 라인수를 입력하시오 : ");
	scanf("%d",&line);
	while (1) {
		if (getchar() != '\n') { break; }
		else if (line > 0) {
			for (i = 1; i <= line; i++) {
				for (j = 1; j <= 2 * (line + 1); j++) {
					if ((j <= i) || (j > 2 * (line + 1) - i)) { printf("*"); }
					else { printf(" "); }
				}
				printf("\n");
			}
			break;
		}
		else {
			printf("# 출력 라인수를 입력하시오 : ");
			scanf("%d", &line);
		}
	}
	
	return 0;
}