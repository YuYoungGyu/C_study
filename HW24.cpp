#include<stdio.h>
#pragma warning (disable : 4996)

int input(const char* );
int cal_Day(int);
void printResult( int, int);

int main() 
{
	int h;
	int day;
	h = input("* �칰�� ���̸� �Է��Ͻÿ�(cm����) : ");
	day = cal_Day(h);
	printResult( h, day);
	return 0;
}

int input(const char* msg)
{
	int input;
	printf("%s", msg);
	scanf("%d", &input);
	return input;
}
int cal_Day(int h)
{
	int day = 0;
	int least; // 30�� ���� ������
	if (h == 0) {
		day = 0;
	}
	else  {
		day = h / 30;
		least = h % 30;
		if (least > 20) { // �������� 20���� ũ�� �Ϸ簡 �� �ɸ���.
			day += 1;
		}
	}
	return day;
}
void printResult(int h, int day)
{
	double mh;
	mh = (double)h / 100;
	printf("%.2lf���� ������ �칰�� Ż���ϱ� ���ؼ��� %d���� �ɸ��ϴ�.\n", mh, day);
}