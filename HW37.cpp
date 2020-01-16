#include<stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int day, day_c, gold = 0;

	printf("기사의 근무일수를 입력하시오 : ");
	scanf("%d", &day);
	while (1) {
		if (day > 0) { break; }
		while (getchar() != '\n') { ; }
		printf("잘못 입력 하셨습니다.\n");
		printf("기사의 근무일수를 입력하시오 : ");
		scanf("%d", &day);
	}

	day_c = day;
	int i = 1;
	while (1) {
		if (day_c >= i) {
			gold += i * i; 
			day_c -= i;
		}
		else { 
			gold += day_c * i;
			break; 
		}
		i++;
	}
	printf("근무일 : %d 일 / 총 금화 수 %d 개\n", day, gold);

	return 0;
}