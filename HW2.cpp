#include<stdio.h>

int main() 
{
	int money = 278970;
	int m50000, m10000, m5000, m1000, m500, m100, m50, m10;
	
	m50000 = money / 50000; //�ʿ��� ���� ���ϱ�
	money -= m50000 * 50000; //������ �ݾ� �ٽ� ����
	m10000 = money / 10000; //�ݺ�
	money -= m10000 * 10000;
	m5000 = money / 5000;
	money -= m5000 * 5000;
	m1000 = money / 1000;
	money -= m1000 * 1000;
	m500 = money / 500;
	money -= m500 * 500;
	m100 = money / 100;
	money -= m100 * 100;
	m50 = money / 50;
	money -= m50 * 50;
	m10 = money / 10;
	money -= m10 * 50;
	// ���
	printf("50000���� => %d��\n", m50000);
	printf("10000���� => %d��\n", m10000);
	printf("5000���� => %d��\n", m5000);
	printf("1000���� => %d��\n", m1000);
	printf("500���� => %d��\n", m500);
	printf("100���� => %d��\n", m100);
	printf("50���� => %d��\n", m50);
	printf("10���� => %d��\n", m10);

	return 0;
}