#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning (disable : 4996)

int input(const char*);
int printResult(int,int);

int main() 
{
	int user, computer; // 유저, 컴퓨터
	int win=0, tie=0, result; // 승리, 비김, 결과(승1,무2,패0)
	srand(time(NULL));
	while (1) {
		user = input("# 바위는 1, 가위는 2, 보는 3 중에서 선택하세요 : ");
		computer = rand() % 3 + 1;
		result = printResult(user, computer);
		if (result == 1) {
			printf("이겼습니다.\n");
			win++;
		}
		else if(result == 2){
			printf("비겼습니다.\n");
			tie++;
		}
		else {
			printf("당신이 졌습니다.\n");
			break;
		}
	}
	printf("게임결과 : %d 승 %d 무\n",win,tie);
	return 0;
}
int input(const char* msg)
{
	int input;
	printf("%s", msg);
	scanf("%d", &input);
	while (1) {
		if (input >= 1 && input <= 3) { break; }
		else {
			while (getchar() != '\n') { ; } // 입력버퍼 비우기
			printf("재입력하세요.\n");
			printf("%s", msg);
			scanf("%d", &input); // 다시 입력받기
		}
	}
	return input;
}
int printResult(int user, int computer)
{
	int result; // 승리1 비김2 패배0
	if (computer == 1) {
		char u_c[10] = "바위";
		if (computer == 1) {
			char c_c[10] = "바위";
			printf("당신은 %s 선택, 컴퓨터는 %s 선택 : ", u_c, c_c);
		}
		else if (computer == 2) {
			char c_c[10] = "가위";
			printf("당신은 %s 선택, 컴퓨터는 %s 선택 : ", u_c, c_c);
		}
		else {
			char c_c[10] = "보";
			printf("당신은 %s 선택, 컴퓨터는 %s 선택 : ", u_c, c_c);
		}
	}
	else if (computer == 2) {
		char u_c[10] = "가위";
		if (computer == 1) {
			char c_c[10] = "바위";
			printf("당신은 %s 선택, 컴퓨터는 %s 선택 : ", u_c, c_c);
		}
		else if (computer == 2) {
			char c_c[10] = "가위";
			printf("당신은 %s 선택, 컴퓨터는 %s 선택 : ", u_c, c_c);
		}
		else {
			char c_c[10] = "보";
			printf("당신은 %s 선택, 컴퓨터는 %s 선택 : ", u_c, c_c);
		}
	}
	else {
		char u_c[10] = "보";
		if (computer == 1) {
			char c_c[10] = "바위";
			printf("당신은 %s 선택, 컴퓨터는 %s 선택 : ", u_c, c_c);
		}
		else if (computer == 2) {
			char c_c[10] = "가위";
			printf("당신은 %s 선택, 컴퓨터는 %s 선택 : ", u_c, c_c);
		}
		else {
			char c_c[10] = "보";
			printf("당신은 %s 선택, 컴퓨터는 %s 선택 : ",u_c,c_c);
		}
	} // 선택 출력
	if (user == computer) { result = 2; }
	else if ((user == computer - 1) || (user == computer + 2)) { result = 1; }
	else { result = 0; } // 결과 출력
	return result;
}