#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	FILE *f; //ファイル構造体へのポインタの作成
	f = fopen("seiyu.txt", "a");

	if (f == NULL) {
		printf("ファイルが開けなかった\n");
		return 1;
	}
	else {
		printf("ファイルが開けたぞ！");
	}

	
	char name[10][50];  //memberはname, age and daihyousaku
	int age[10];
	char daihyosaku[10][100];
	
	printf("好きな声優さんの名前、年齢、代表作を入力してください\n");

	for (int i = 0; i < 10; i = i + 1) {
		scanf("%s %d %s", name[i], &age[1], daihyosaku[i]);
		fprintf(f, "%s %d %s\n", name[i], age[1], daihyosaku[i]);
	}

	fclose(f);
	printf("ファイルを閉じました\n");

	return 0;
}