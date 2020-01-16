#include<stdio.h>
#pragma warning (disable : 4996)

int inputW();
double inputH();
double calBmi(int, double);
void printResult(double);

int main() 
{
	int weight; // ������
	double height, bmi; //Ű,bmi

	weight = inputW();
	height = inputH();
	bmi = calBmi(weight,height);

	printResult(bmi); // ��� ���

	return 0;
}
int inputW()
{
	int w;
	printf("�����Ը� �Է��ϼ���(kg) :");
	scanf("%d",&w);
	return w;
}
double inputH()
{
	double h;
	printf("Ű�� �Է��ϼ���(m) :");
	scanf("%lf", &h);
	return h;
}
double calBmi(int w, double h)
{
	double bmi = w / (h*h);
	return bmi;
}
void printResult(double bmi) 
{
	if (bmi < 30) {
		if (bmi >= 25) {
			// ��ü��
			printf("����� BMI�� %.1lf���� ��ü���Դϴ�\n", bmi);
		}
		else if (bmi < 18.5) {
			// ��ü��
			printf("����� BMI�� %.1lf���� ��ü���Դϴ�\n", bmi);
		}
		else {
			// ����ü��
			printf("����� BMI�� %.1lf���� ����ü���Դϴ�\n", bmi);
		}
	}
	else {
		if (bmi < 40) {
			// ��
			printf("����� BMI�� %.1lf���� ���Դϴ�\n", bmi);
		}
		else {
			// ����
			printf("����� BMI�� %.1lf���� �����Դϴ�\n", bmi);
		}

	}
}