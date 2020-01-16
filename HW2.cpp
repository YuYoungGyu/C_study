#include<stdio.h>

int main() 
{
	int money = 278970;
	int m50000, m10000, m5000, m1000, m500, m100, m50, m10;
	
	m50000 = money / 50000; //필요한 개수 구하기
	money -= m50000 * 50000; //나머지 금액 다시 저장
	m10000 = money / 10000; //반복
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
	// 출력
	printf("50000원권 => %d개\n", m50000);
	printf("10000원권 => %d개\n", m10000);
	printf("5000원권 => %d개\n", m5000);
	printf("1000원권 => %d개\n", m1000);
	printf("500원권 => %d개\n", m500);
	printf("100원권 => %d개\n", m100);
	printf("50원권 => %d개\n", m50);
	printf("10원권 => %d개\n", m10);

	return 0;
}