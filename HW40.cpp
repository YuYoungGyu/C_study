#include<stdio.h>
#pragma warning (disable : 4996)

int main() 
{
	int line;
	int i, j;

	printf("# ��� ���μ��� �Է��Ͻÿ� : ");
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
			printf("# ��� ���μ��� �Է��Ͻÿ� : ");
			scanf("%d", &line);
		}
	}
	
	return 0;
}