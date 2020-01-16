#include<stdio.h>
#pragma warning (disable : 4996)

int main() 
{
	int num;
	int p1 = 1, p2 = 1, temp, total = 1; // 피버나치 1항, 2항, 중개 수, 총 합

	printf("피보나치 수열의 항수를 입력하시오 : ");
	scanf("%d",&num);
	while (1) {
		if (num > 0) { break; }
		while (getchar() != '\n') { ; }
		printf("잘못 입력 하셨습니다.\n");
		printf("피보나치 수열의 항수를 입력하시오");
		scanf("%d", &num);
	}
	if (num == 1) { // 1일때는 예외로 둔다.
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