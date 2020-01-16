#include<stdio.h>
#include<string.h>
#include<windows.h>
#pragma warning (disable : 4996)

void inputString(const char*, char*); // ���ڿ� �Է� �Լ�
void gotoxy(int, int); // Ŀ�� �̵��Լ�
void printString(char*); // ȭ�鿡 ���ڿ� ���
void scroll(char*, int); // ���ڿ� �������� ��ĭ ��ũ�� ��Ű�� �Լ�

int main() 
{
	char string[50];
	inputString("���ڿ��� �Է��Ͻÿ� : ", string);
	printString(string);
	return 0;
}

void inputString(const char* msg, char* string)
{
	printf("%s",msg);
	fgets(string, 50,stdin);
}
void printString(char* string) 
{
	int strlen = 0;
	for (int i = 0; i < 50; i++){
		if (string[i] == '\n') { break; }
		strlen++;
	}
	system("cls");
	gotoxy(30, 12);
	printf("%s", string);
	Sleep(300);
	for (int i = 0; i < (strlen-1)*2-1; i++) {
		scroll(string, strlen);
		system("cls");
		gotoxy(30, 12);
		printf("%s",string);
		Sleep(300);
	}
	for (int i = 0; i < 3; i++) {
		system("cls");
		gotoxy(30, 12);
		printf(" ");
		Sleep(300);
		printf("%s", string);
		Sleep(300);
	}
}
void gotoxy(int x, int y)
{
	COORD Pos = { x - 1,y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void scroll(char* string, int strlen)
{
	char temp;
	temp = string[0];
	for (int i = 0; i < strlen-1; i++) {
		string[i] = string[i + 1];
	}
	string[strlen - 1] = temp;
}