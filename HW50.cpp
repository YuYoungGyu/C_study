#include<stdio.h>
#include<string.h>
#pragma warning (disable : 4996)

int inputWord(const char*, char*);
void inputC(const char*, char*);
int strcheck(char*, char);

int main() 
{
	int end, index;
	char word[100];
	char c;

	while (1) {
		end = inputWord("# 문자열을 입력하시오 : ", word);
		if (end == 0) { break; }
		inputC("# 문자를 입력하시오 : ", &c);
		index = strcheck(word, c);
		if (index == -1) { printf("\"%s\"문자열 안에 \'%c\'문자는 존재하지 않습니다.\n\n",word, c); }
		else { printf("\"%s\"문자열 안에 \'%c\'문자는 %d번 위치에 존재합니다.\n\n", word, c,index); }
	}
	return 0;
}
int inputWord(const char* msg, char* word)
{
	int res = 0;
	printf("%s", msg);
	scanf("%s", word);
	res = strcmp(word, "end");
	while (getchar() != '\n') {
		while (getchar() != '\n') { ; }
		printf("%s", msg);
		scanf("%s", word);
		res = strcmp(word,"end"); // 
	}
	return res;
}
void inputC(const char* msg, char* c)
{
	printf("%s", msg);
	scanf("%c", c);
	while (getchar() != '\n') {
		while (getchar() != '\n') { ; }
		printf("%s", msg);
		scanf("%c", c);
	}
}
int strcheck(char* word, char c)
{
	int index = -1, wordlen;
	wordlen = sizeof(word) / sizeof(char);

	for (int i = 0; i < wordlen; i++) {
		if (word[i] == c) { 
			index = i; 
			break; 
		}
	}
	return index;
}