#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (void){
	
	int a = 0;

	printf("なんでもいいので、整数を入力してリターンキーを押してください\n");
	scanf("%d", &a);
	printf("あなたは%dと入力しましたね", a);

	return 0;

}