#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	int a = 0;

	printf("血液型占いにようこそ！\n");
	printf("A型なら１、B型なら２、O型なら３、AB型なら４を入力してください\n");

	scanf("%d", &a);

	switch (a)
	{
	case 1:
		printf("ははぁ、几帳面なんですね\n");
		printf("失恋には弱いそうですね\n");


	case 2:
		printf("天真爛漫なんですね\n");

	case 3:
		printf("親分肌なんですね\n");

	case 4:
		printf("知識欲が旺盛なんですね\n");

	default:
		printf("ちゃんとやってくださいよぅ\n");
		break;
	}

	return 0;
}