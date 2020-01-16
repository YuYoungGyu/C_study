#include<stdio.h>
#pragma warning (disable : 4996)

int inputW();
double inputH();
double calBmi(int, double);
void printResult(double);

int main() 
{
	int weight; // 몸무게
	double height, bmi; //키,bmi

	weight = inputW();
	height = inputH();
	bmi = calBmi(weight,height);

	printResult(bmi); // 결과 출력

	return 0;
}
int inputW()
{
	int w;
	printf("몸무게를 입력하세요(kg) :");
	scanf("%d",&w);
	return w;
}
double inputH()
{
	double h;
	printf("키를 입력하세요(m) :");
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
			// 과체중
			printf("당신의 BMI는 %.1lf으로 과체중입니다\n", bmi);
		}
		else if (bmi < 18.5) {
			// 저체중
			printf("당신의 BMI는 %.1lf으로 저체중입니다\n", bmi);
		}
		else {
			// 정상체중
			printf("당신의 BMI는 %.1lf으로 정상체중입니다\n", bmi);
		}
	}
	else {
		if (bmi < 40) {
			// 비만
			printf("당신의 BMI는 %.1lf으로 비만입니다\n", bmi);
		}
		else {
			// 고도비만
			printf("당신의 BMI는 %.1lf으로 고도비만입니다\n", bmi);
		}

	}
}