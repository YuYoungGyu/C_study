#include<stdio.h>
#include<string.h> 
#pragma warning (disable : 4996)

int main() 
{
	char name[20], gender;
	double height;

	printf("# 성명 입력 : ");
	fgets(name,sizeof(name),stdin); // 개행문자까지 받아들인다!
	int name_len = strlen(name);
	name[name_len-1] = NULL; // 개행문자 삭제

	printf("# 키 입력(cm단위) : ");
	scanf("%lf",&height);
	getchar(); // 입력 버퍼에 남아있는 개행문자 없애기
	
	printf("# 성별입력(M/F) : ");
	gender = getchar();

	if (gender == 'M') {
		printf("%s씨의 키는 %.2lfcm이고 남성입니다.\n",name,height);
	}
	else if(gender == 'W'){
		printf("%s씨의 키는 %.2lfcm이고 여성입니다.\n", name, height);
	}
	else {
		printf("성별 입력 오류\n");
	}

	return 0;
}