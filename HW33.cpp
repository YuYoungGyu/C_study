#include<stdio.h>
#pragma warning (disable : 4996)
#define LINE printf("------------------------------------------------------------------\n")

int menu(const char*);
unsigned short inputFanNumber(const char*);
void openFan(unsigned short*);
void offFan(unsigned short*);
void reverseFan(unsigned short*);
void displayFan(unsigned short*);
void myflush();

int main() 
{
	int m;
	unsigned short fan=0;
	while (1) {
		m = menu("1. 환풍기 열기 / 2. 환풍기 닫기 / 3. 환풍구 전체 전환 / 4. 종료 : ");
		if (m == 4) { break; }
		switch (m) {
		case 1: 
			openFan(&fan);
			displayFan(&fan);
			break;
		case 2: 
			offFan(&fan);
			displayFan(&fan);
			break;
		case 3: 
			reverseFan(&fan);
			displayFan(&fan);
			break;
		default:;
		}
	}
	return 0;
}

int menu(const char* msg)
{
	int res;
	printf("%s", msg);
	scanf("%d",&res);
	while (1) {
		if ((res >= 1) && (res <= 4)) {break;}
		myflush();
		printf("* 잘못 입력하셨습니다. 다시 입력하세요.\n");
		LINE;
		printf("%s", msg);
		scanf("%d", &res);
	}
	LINE;
	return res;
}
unsigned short inputFanNumber(const char* msg)
{
	int input;
	printf("%s",msg);
	scanf("%d", &input);
	while (1) {
		if ((input >= 1) && (input <= 8)) { break; }
		myflush();
		printf("* 잘못 입력하셨습니다. 다시 입력하세요.\n");
		LINE;
		printf("%s", msg);
		scanf("%d", &input);
	}
	return input;
}
void openFan(unsigned short* fan)
{
	printf("\t\tFan 열기 작업 실행 화면\n");
	LINE;
	unsigned short fanNumber, fanCondition, fann = 1;
	fanNumber = inputFanNumber("* OPEN할 FAN 번호를 입력하시오(1-8) : ");
	LINE;
	fanCondition = *fan & (fann << (fanNumber - 1));
	fann <<= (fanNumber - 1);
	if (fanCondition) { printf("%s", "이미 열려있는 FAN입니다.\n"); LINE;}
	else { *fan |= fann; }
}
void offFan(unsigned short* fan)
{
	printf("\t\tFan 닫기 작업 실행 화면\n");
	LINE;
	unsigned short fanNumber, fanCondition, fann = 1;
	fanNumber = inputFanNumber("* OPEN할 FAN 번호를 입력하시오(1-8) : ");
	LINE;
	fanCondition = *fan & (fann << (fanNumber - 1));
	fann <<= (fanNumber - 1);
	if (fanCondition) { *fan ^= fann; }
	else { printf("%s", "이미 닫혀있는 FAN입니다.\n"); LINE;}
}
void reverseFan(unsigned short* fan)
{
	*fan = ~*fan;
	printf("전체 FAN의 상태가 전환되었습니다. (ON, OFF 상태 뒤바뀜)\n");
	LINE;
}
void displayFan(unsigned short* fan)
{
	unsigned char fanCondition;
	for (int i = 8; i > 0; i--) {printf("%3d%s", i,"번FAN");}
	printf("\n");
	for (int i = 7; i >= 0; i--) {
		fanCondition = 1;
		if (*fan & fanCondition << i) { printf("%8s","ON"); }
		else { printf("%8s","OFF"); }
	}
	printf("\n");
	LINE;
	printf("\n\n");
}
void myflush()
{
	while (getchar() != '\n') { ; }
}