#include<stdio.h>
#pragma warning (disable : 4996)

int main() 
{
	int num;
	int p1 = 1, p2 = 1, temp, total = 1; // �ǹ���ġ 1��, 2��, �߰� ��, �� ��

	printf("�Ǻ���ġ ������ �׼��� �Է��Ͻÿ� : ");
	scanf("%d",&num);
	while (1) {
		if (num > 0) { break; }
		while (getchar() != '\n') { ; }
		printf("�߸� �Է� �ϼ̽��ϴ�.\n");
		printf("�Ǻ���ġ ������ �׼��� �Է��Ͻÿ�");
		scanf("%d", &num);
	}
	if (num == 1) { // 1�϶��� ���ܷ� �д�.
		printf("1 = 1\n");
	}
	else {
		for (int i = 1; i < num; i++) {
			printf("%d + ", p1);
			temp = p1 + p2;
			p1 = p2;
			p2 = temp;
			total += p1;
		}
		printf("%d = %d\n", p1, total);
	}
	return 0;
}