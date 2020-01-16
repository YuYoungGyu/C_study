#include<stdio.h>
#pragma warning (disable : 4996)

int main() 
{
	int i = 1;
	int inputNum, total = 0; // 입력받은 양의정수, 총 합
	for (i; i <= 5; i++) {
		printf("0보다 큰수를 입력하시오(%d 번째) : ",i);
		scanf("%d",&inputNum);
		if (inputNum > 0) { total += inputNum; i++;}
		i--;
	}
	printf("입력된 값의 총 합 : %d\n",total);

	return 0;
}
