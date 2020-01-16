#include<stdio.h>
#pragma warning (disable : 4996)

int inputUint(const char*);
int transNumber(int);

int main() 
{
	int p1,p2,n, all_n = 0; //시작 값, 끝 값, 고집수, 총 갯수
	p1 = inputUint("시작 값(P1) : ");
	while (1) {
		p2 = inputUint("시작 값(P2) : ");
		if (p1 > p2) {
			printf("시작값 보다 큰 값을 입력하시오.\n");
		}
		else { break; }
	}
	n = inputUint("고집수(N) : ");
	printf("\n고집수가 %d인 숫자 출력\n",n);
	for (int i = p1; i <= p2; i++) {
		int rotate = 0;
		int trans_number = i;
		while (i) {
			if (trans_number < 10) { break; }
			trans_number = transNumber(trans_number);
			rotate++;
		}
		if (rotate == n) {
			all_n++;
			printf("%d\n",i); 
		}
	}
	printf("총 개수 : %d 개",all_n);
	return 0;
}
int inputUint(const char* msg)
{
	int input;
	printf("%s",msg);
	scanf("%d", &input);
	while (getchar() != '\n') {
		printf("잘못된 입력입니다.\n");
		while (getchar() != '\n') { ; }
		printf("%s", msg);
		scanf("%d", &input);
		if (input > 0) { break; }
	}
	return input;
}
int transNumber(int num)
{
	int result;
	int step;
	int n1 = 1, n2 = 1, n3 = 1, n4 = 1;
	if (num >= 100) {
		if (num >= 1000) { step = 1; }
		else { step = 2; }
	}
	else{
		if (num >= 10) { step = 3; }
		else { step = 4; }
	}
	switch (step) {
	case 1:
		n4 = num / 1000; // 1000의 자리(10000일때 10을 가짐)
		num -= n4 * 1000;
	case 2:
		n3 = num / 100; // 100의 자리
		num -= n3 * 100;
	case 3:
		n2 = num / 10; // 10의 자리
		num -= n2 * 10;
	default:
		n1 = num; // 1의 자리
	}
	result = n4 * n3 * n2 * n1; // 초기값이 1이기 초과하는 자릿수는 연산에 영향X
	return result;
}