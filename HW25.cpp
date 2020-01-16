#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning (disable : 4996)

int input(const char* , int*, int*);
int printResult(int, int, int*, int*);

int main() 
{
	int head_num = 0, tail_num = 100; // ���� ��, ū ��
	int input_num, randNum, result; // �Է��� ��, ����, ��ġ ���� Ȯ��

	srand(time(NULL));
	randNum = rand() % 100 + 1; // 1~100

	int i = 1; // �ݺ� Ƚ ��
	while (1) {
		input_num = input("# ���ڸ� �Է��Ͻÿ� : ", &head_num,&tail_num);
		result = printResult(input_num, randNum, &head_num, &tail_num);
		if (result == 1) { 
			printf("%d ��° ���� ���߼̽��ϴ�.\n",i);
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
			printf("�Է��� �ùٸ��� �ʽ��ϴ�.\n");
			while (getchar() != '\n') { ; }
			printf("%s", msg);
			scanf("%d", &input);
		}
		if ((input >= *head_num) && (input <= *tail_num)){break;}
		else { printf("�Է��� �ùٸ��� �ʽ��ϴ�.\n"); }
	}
	return input;
}
int printResult(int input_num,int randNum, int* head_num, int* tail_num)
{
	int result = 0;
	if (input_num > randNum) {
		*tail_num = input_num;
		printf("%d���ٴ� ũ�� %d���ٴ� �۽��ϴ�.\n",*head_num,*tail_num);
	}
	else if (input_num < randNum) {
		*head_num = input_num;
		printf("%d���ٴ� ũ�� %d���ٴ� �۽��ϴ�.\n", *head_num, *tail_num);
	}
	else {
		result = 1;
	}
	return result;
}