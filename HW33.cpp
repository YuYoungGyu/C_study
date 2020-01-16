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
		m = menu("1. ȯǳ�� ���� / 2. ȯǳ�� �ݱ� / 3. ȯǳ�� ��ü ��ȯ / 4. ���� : ");
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
		printf("* �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
		printf("* �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
		LINE;
		printf("%s", msg);
		scanf("%d", &input);
	}
	return input;
}
void openFan(unsigned short* fan)
{
	printf("\t\tFan ���� �۾� ���� ȭ��\n");
	LINE;
	unsigned short fanNumber, fanCondition, fann = 1;
	fanNumber = inputFanNumber("* OPEN�� FAN ��ȣ�� �Է��Ͻÿ�(1-8) : ");
	LINE;
	fanCondition = *fan & (fann << (fanNumber - 1));
	fann <<= (fanNumber - 1);
	if (fanCondition) { printf("%s", "�̹� �����ִ� FAN�Դϴ�.\n"); LINE;}
	else { *fan |= fann; }
}
void offFan(unsigned short* fan)
{
	printf("\t\tFan �ݱ� �۾� ���� ȭ��\n");
	LINE;
	unsigned short fanNumber, fanCondition, fann = 1;
	fanNumber = inputFanNumber("* OPEN�� FAN ��ȣ�� �Է��Ͻÿ�(1-8) : ");
	LINE;
	fanCondition = *fan & (fann << (fanNumber - 1));
	fann <<= (fanNumber - 1);
	if (fanCondition) { *fan ^= fann; }
	else { printf("%s", "�̹� �����ִ� FAN�Դϴ�.\n"); LINE;}
}
void reverseFan(unsigned short* fan)
{
	*fan = ~*fan;
	printf("��ü FAN�� ���°� ��ȯ�Ǿ����ϴ�. (ON, OFF ���� �ڹٲ�)\n");
	LINE;
}
void displayFan(unsigned short* fan)
{
	unsigned char fanCondition;
	for (int i = 8; i > 0; i--) {printf("%3d%s", i,"��FAN");}
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