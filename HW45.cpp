#include<stdio.h>
#include <windows.h>
#pragma warning (disable : 4996)

void inputX(const char*, int*, int*);
void inputY(const char*, int*, int*);
char inputCommend();
void gotoxy(int,int); // x��ǥ, y��ǥ
void printBox(int, int, int, int);

int main() 
{
	int sx=0, ex=0, sy=0, ey=0;
	char commend;
	inputX("sx ��ǥ �Է�", &sx, &ex); // sx �Է�
	inputX("ex ��ǥ �Է�", &sx, &ex); // ex �Է�
	inputY("sy ��ǥ �Է�", &sy, &ey); // sy �Է�
	inputY("ey ��ǥ �Է�", &sy, &ey); // ey �Է�

	printBox(sx,ex,sy,ey);
	while (1) {
		commend = inputCommend();
		if (commend > 'd') {
			if (commend == 'w') {
				if (sy == 1) {}
				else { sy--; ey--; }
			}
			else {
				if (sy == 24) {}
				else { sy++; ey++; }
			}
		}
		else if (commend < 'd') {
			if (commend == 'a') {
				if (sx == 1) {}
				else { sx--; ex--; }
			}
			else { break; }
		}
		else {
			if (ex == 80) {}
			else { sx++; ex++; }
		}
		printBox(sx, ex, sy, ey);
	}
	return 0;
}
void inputX(const char* msg, int* spots, int* spote)
{
	if (*spots == 0) { 
		while (1) {
			printf("%s", msg);
			printf("(1~70) : ");
			scanf("%d", spots);
			if ((*spots >= 1) && (*spots <= 70)) { break; }
			while (getchar() != '\n') { ; }
			printf("���� ���� ���� �Է��ϼ���\n");
		}
	}
	else {
		while (1) {
			printf("%s", msg);
			printf("(%d~80) : ",*spots+1);
			scanf("%d", spote);
			if ((*spote >= *spots + 1) && (*spote <= 80)) { break; }
			while (getchar() != '\n') { ; }
			printf("���� ���� ���� �Է��ϼ���\n");
		}
	}
}
void inputY(const char* msg, int* spots, int* spote)
{
	if (*spots == 0) {
		while (1) {
			printf("%s", msg);
			printf("(1~20) : ");
			scanf("%d", spots);
			if ((*spots >= 1) && (*spots <= 20)) { break; }
			while (getchar() != '\n') { ; }
			printf("���� ���� ���� �Է��ϼ���\n");
		}
	}
	else {
		while (1) {
			printf("%s", msg);
			printf("(%d~24) : ", *spots + 1);
			scanf("%d", spote);
			if ((*spote >= *spots + 1) && (*spote <= 24)) { break; }
			while (getchar() != '\n') { ; }
			printf("���� ���� ���� �Է��ϼ���\n");
		}
	}
}
void gotoxy(int x, int y)
{
	COORD Pos = { x-1,y-1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void printBox(int sx, int ex, int sy, int ey)
{
	system("cls"); // ȭ�� �����
	int i;
	int disx = ex - sx;
	int disy = ey - sy;
	for (i = 0; i <= disx; i++) {
		gotoxy(sx+i, sy);// Ŀ�� �����̱�
		printf("*");
	}
	for (i = 1; i <= disy; i++) {
		gotoxy(sx, sy+i);
		printf("*");
		gotoxy(ex, sy + i);
		printf("*");
	}
	for (i = 0; i <= disx; i++) {
		gotoxy(sx + i, ey);
		printf("*");
	}
}
char inputCommend() 
{
	char input;
	while (1) {
		while (getchar() != '\n') { ; }
		input = getchar();
		if ((input == 'w') || (input == 'a') || (input == 's') || (input == 'd') || (input == 27)) { break; }
	}
	return input;
}