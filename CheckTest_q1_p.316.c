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

	struct info {  // infoという名前の構造体（任意の複数の型をまとめた一つの型）作成宣言
		char name[50];  //memberはname, age and daihyousaku
		int age;
		char daihyosaku[100];
	}seiyu[10];  //info型を持つseiyuという変数を作成

	printf("好きな声優さんの名前、年齢、代表作を入力してください\n");

	for (int i = 0; i < 10; i = i + 1) {
		scanf("%s %d %s", seiyu[i].name, &seiyu[i].age, seiyu[i].daihyosaku);
		fprintf(f, "%s %d %s\n", seiyu[i].name, seiyu[i].age, seiyu[i].daihyosaku);
	}

	fclose(f);
	printf("ファイルを閉じました\n");

	return 0;
}