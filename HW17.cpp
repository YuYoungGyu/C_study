#include<stdio.h>
#include<string.h> 
#pragma warning (disable : 4996)

int main() 
{
	char name[20], gender;
	double height;

	printf("# ���� �Է� : ");
	fgets(name,sizeof(name),stdin); // ���๮�ڱ��� �޾Ƶ��δ�!
	int name_len = strlen(name);
	name[name_len-1] = NULL; // ���๮�� ����

	printf("# Ű �Է�(cm����) : ");
	scanf("%lf",&height);
	getchar(); // �Է� ���ۿ� �����ִ� ���๮�� ���ֱ�
	
	printf("# �����Է�(M/F) : ");
	gender = getchar();

	if (gender == 'M') {
		printf("%s���� Ű�� %.2lfcm�̰� �����Դϴ�.\n",name,height);
	}
	else if(gender == 'W'){
		printf("%s���� Ű�� %.2lfcm�̰� �����Դϴ�.\n", name, height);
	}
	else {
		printf("���� �Է� ����\n");
	}

	return 0;
}