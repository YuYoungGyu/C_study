#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning (disable : 4996)

int input(const char* , int*, int*);
int printResult(int, int, int*, int*);

int main() 
{
	int head_num = 0, tail_num = 100; // 작은 수, 큰 수
	int input_num, randNum, result; // 입력한 수, 난수, 일치 여부 확인

	srand(time(NULL));
	randNum = rand() % 100 + 1; // 1~100

	int i = 1; // 반복 횟 수
	while (1) {
		input_num = input("# 숫자를 입력하시오 : ", &head_num,&tail_num);
		result = printResult(input_num, randNum, &head_num, &tail_num);
		if (result == 1) { 
			printf("%d 번째 만에 맞추셨습니다.\n",i);
			break; 
		}
		i++;
	}
	return 0;
}

int input(const char* msg, int* head_num, int* tail_num)
{
	int input;
	while (1) {
		printf("%s", msg);
		scanf("%d", &input);
		while (getchar() != '\n') {
			printf("입력이 올바르지 않습니다.\n");
			while (getchar() != '\n') { ; }
			printf("%s", msg);
			scanf("%d", &input);
		}
		if ((input >= *head_num) && (input <= *tail_num)){break;}
		else { printf("입력이 올바르지 않습니다.\n"); }
	}
	return input;
}
int printResult(int input_num,int randNum, int* head_num, int* tail_num)
{
	int result = 0;
	if (input_num > randNum) {
		*tail_num = input_num;
		printf("%d보다는 크고 %d보다는 작습니다.\n",*head_num,*tail_num);
	}
	else if (input_num < randNum) {
		*head_num = input_num;
		printf("%d보다는 크고 %d보다는 작습니다.\n", *head_num, *tail_num);
	}
	else {
		result = 1;
	}
	return result;
}