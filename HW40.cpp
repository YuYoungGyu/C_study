#include<stdio.h>
#pragma warning (disable : 4996)

int main() 
{
	int line;
	int i, j;

	while (1) {
		printf("# ��� ���μ�(1~30)�� �Է��Ͻÿ� : ");
		scanf("%d", &line);
		if (getchar() != '\n') { break; }
		else if ((line > 0) && (line <= 30)) {
			for (i = 1; i <= line; i++) {
				for (j = 1; j <= 2 * (line + 1); j++) {
					if ((j <= i) || (j > 2 * (line + 1) - i)) { printf("*"); }
					else { printf(" "); }
				}
				printf("\n\n");
			}
		}
	}
	
	return 0;
}