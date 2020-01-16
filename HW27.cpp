#include<stdio.h>
#pragma warning (disable : 4996)

int input(const char* );
void myflush();

int main() 
{
	int i, weight;
	for (i = 1; i <= 10; i++) { // 10회 반복
		weight = input("# 계란의 무게를 입력하세요(단위 : g) : ");
		if (weight > 500) {
			printf("* 타조알 가지고 장난하지 마시오~^^\n");
			i--;
		}
		else if(weight < 150) {
			printf("* 메추리알 가지고 장난하지 마시오~^^\n");
			i--;
		}
		else {
			printf("* 현재 달걀의 수 : %d\n", i);
		}
	}
	printf("\n*** 달걀의 포장이 끝났습니다.\n");
	return 0;
}

int input(const char* msg)
{
	int input;
	printf("%s",msg);
	scanf("%d", &input);
	while (getchar() != '\n') { // 입력버퍼 확인
		myflush(); // 입력버퍼 비우기
		printf("%s", msg); 
		scanf("%d", &input); // 다시 입력받기
	}
	return input;
}
void myflush() 
{
	while (getchar() != '\n') { ; }
}