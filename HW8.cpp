#include<stdio.h>
#pragma warning (disable : 4996)

int main() 
{
	int his, cul, art, total; //역사 문화 예술 총점
	double avg; // 평균

	printf("역사, 문학, 예능 점수를 입력하세요 : ");
	scanf("%d %d %d",&his,&cul,&art);

	total = his + cul + art;
	avg = (double)total / 3;

	printf("총점은 %d 이고 평균은 %.2lf 입니다.\n", total, avg);

	return 0;
}